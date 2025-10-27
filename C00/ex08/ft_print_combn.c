/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 11:10:25 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/08 09:19:20 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digits(char *combination, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(*(combination + i));
		i++;
	}
}

int	index_to_increment(char *combination, int size)
{
	int	i;

	i = size - 1;
	while (i >= 0)
	{
		if (*(combination + i) <= '9' - size + i)
			return (i);
		i--;
	}
	return (-1);
}

void	increment(char *combination, int size, int index)
{
	int		i;
	char	value;

	i = 1;
	value = *(combination + index);
	while (index < size)
	{
		*(combination + index) = value + i;
		i++;
		index++;
	}
}

void	ft_print_combn(int n)
{
	int		index;
	char	array[9];

	index = 0;
	while (index < n)
	{
		array[index] = index + '0';
		index++;
	}
	print_digits(array, n);
	write(1, ", ", 2);
	index = index_to_increment(array, n);
	while (index >= 0)
	{
		increment(array, n, index);
		print_digits(array, n);
		if (array[0] != '0' + 10 - n)
		{
			write(1, ", ", 2);
		}
		index = index_to_increment(array, n);
	}
}
