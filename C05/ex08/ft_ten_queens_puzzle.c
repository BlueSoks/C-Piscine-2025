/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 22:22:36 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/10 22:28:40 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>
*/
void	print_positions(int positions[])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = positions[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check_position(int i, int n, int positions[])
{
	int	j;
	int	flag;

	j = 0;
	flag = 1;
	while (j < n)
	{
		if (positions[j] == i || positions[j] == i - (n - j) 
			|| positions[j] == i + (n - j))
			flag = 0;
		j++;
	}
	return (flag);
}

void	place_queens(int n, int positions[], int *res)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (check_position(i, n, positions))
		{
			positions[n] = i;
			if (n == 9)
			{
				print_positions(positions);
				*(res) += 1;
			}
			else
			{
				place_queens(n + 1, positions, res);
			}
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	positions[10];
	int	tmp;
	int	*res;

	tmp = 0;
	res = &tmp;
	place_queens(0, positions, res);
	return (*res);
}
/*
int	main(void)
{
	int	res;

	res = ft_ten_queens_puzzle();
	printf("%d\n", res);
	return (0);
}
*/
