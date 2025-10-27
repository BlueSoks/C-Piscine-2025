/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:19:01 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/24 14:16:23 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	column_count(char *data, t_map *map)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (data[i])
	{
		j = i;
		while (data[i] && data[i] != '\n')
			i++;
		if (len == 0)
			len = i - j;
		else
		{
			if (len != i - j)
				return (0);
		}
		if (data[i])
			i++;
	}
	if (len == 0)
		return (0);
	map->cols = len;
	return (1);
}

int	row_count(char *data, t_map *map)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (data[i])
	{
		if (data[i] != map->empty && data[i] != map->obstacle 
			&& data[i] != '\n')
			return (0);
		if (data[i] == '\n')
			count++;
		i++;
	}
	if (count != map->rows)
		return (0);
	return (1);
}

int	fill_array(char *data, t_map *map)
{
	int		i;
	int		j;

	i = 0;
	map->grid = malloc(sizeof(char *) * map->rows);
	if (!map->grid)
		return (0);
	while (i < map->rows)
	{
		j = 0;
		map->grid[i] = malloc(map->cols + 1);
		if (!map->grid[i])
			return (0);
		while (j < map->cols)
		{
			map->grid[i][j] = data[(map->cols + 1) * i + j];
			j++;
		}
		map->grid[i][j] = '\0';
		i++;
	}
	return (1);
}

void	free_grid(t_map *map)
{
	int	i;
	int	r;

	i = 0;
	if (!map)
		return ;
	r = map->rows;
	if (map->grid)
	{
		while (i < r)
		{
			free(map->grid[i]);
			i++;
		}
		free(map->grid);
	}
}

t_map	*fill_map(char *data)
{
	t_map	*map;
	int		i;

	i = 0;
	while (data[i] && data[i] != '\n')
		i++;
	if (!data[i])
		return (NULL);
	data[i] = '\0';
	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	if (!read_header(data, map))
		return (free(map), NULL);
	if (!column_count(data + i + 1, map))
		return (free(map), NULL);
	if (!row_count(data + i + 1, map))
		return (free(map), NULL);
	if (!fill_array(data + i + 1, map))
	{
		free_grid(map);
		return (NULL);
	}
	return (map);
}
