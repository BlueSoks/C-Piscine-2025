/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:13:29 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/06 13:23:40 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index_min;
	int	cursor;
	int	i;
	int	value_min;

	cursor = 0;
	while (cursor < size - 1)
	{
		i = cursor;
		index_min = i;
		value_min = *(tab + i);
		while (i < size)
		{
			if (*(tab + i) < value_min)
			{
				index_min = i;
				value_min = *(tab + i);
			}
			i++;
		}
		*(tab + index_min) = *(tab + cursor);
		*(tab + cursor) = value_min;
		cursor++;
	}
}
