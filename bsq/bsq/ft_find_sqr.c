/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_sqr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhang <zzhang@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:36:39 by zzhang            #+#    #+#             */
/*   Updated: 2025/09/23 18:31:02 by zzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	update_pos(int idx_r, int idx_c, int len, int *pos)
{
	pos[2] = len;
	pos[0] = idx_r - len + 1;
	pos[1] = idx_c - len + 1;
}

/*this ft is a taken out of locate_sqr bc it is too long */
void	locate_sqr_1(int *pos, t_map *map, int *pre, int *cur)
{
	int		r;
	int		c;
	char	**grid;

	r = -1;
	grid = map->grid;
	while (++r < map->rows)
	{
		c = -1;
		while (++c < map->cols)
		{
			if (grid[r][c] == map->obstacle)
				cur[c + 1] = 0;
			else
				cur[c + 1] = minimum(pre[c + 1], cur[c], pre[c]) + 1;
			if (cur[c + 1] > pos[2])
				update_pos(r, c, cur[c + 1], pos);
		}
		arraycpy(pre, cur, map->cols + 1);
	}
}

/*this ft returns a list of array [r,c,len] with the 
first and second integer being the starting position
to write full character and third integer being length of square*/

void	locate_sqr(int *pos, t_map *map)
{
	int	*pre;
	int	*cur;

	pre = mkarray(map->cols);
	cur = mkarray(map->cols);
	if (!pre || !cur)
	{
		pos[0] = -1;
		pos[1] = -1;
		pos[2] = -1;
	}
	else
		locate_sqr_1(pos, map, pre, cur);
	free(pre);
	free(cur);
}

void	fill_sqr(char **grid, t_map *map)
{
	int	i;
	int	j;
	int	len;
	int	pos[3];

	pos[0] = 0;
	pos[1] = 0;
	pos[2] = 0;
	locate_sqr(pos, map);
	i = pos[0];
	len = pos[2];
	while (i < pos[0] + len)
	{
		j = pos[1];
		while (j < pos[1] + len)
		{
			grid[i][j] = map->full;
			j++;
		}
		i++;
	}
}

void	ft_find_sqr(t_map *map)
{
	char	**grids;

	grids = map->grid;
	fill_sqr(grids, map);
	display(map);
}
