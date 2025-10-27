/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:17:23 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/23 20:14:37 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	display(t_map *map)
{
	int		r;
	int		i;
	char	**grid;

	r = map->rows;
	grid = map->grid;
	i = -1;
	while (++i < r)
	{
		ft_putstr(grid[i]);
		write(1, "\n", 1);
	}
}

int	minimum(int a, int b, int c)
{
	if (b <= c && b <= a)
		return (b);
	else if (c <= b && c <= a)
		return (c);
	else
		return (a);
}

/*this make a list of array with size + 1
  and initialise to value ZERO*/
int	*mkarray(int size)
{
	int	*array;
	int	i;

	i = -1;
	array = (int *) malloc((size + 1) * sizeof(int));
	if (!array)
		return (0);
	while (++i < size + 1)
		array[i] = 0;
	return (array);
}

/*this ft copies the list of integers from array2 to array1 */
void	arraycpy(int *array1, int *array2, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		array1[i] = array2[i];
}
