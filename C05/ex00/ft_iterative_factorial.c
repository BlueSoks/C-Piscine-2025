/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:47:01 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/15 15:41:45 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
int	main()
{
	int	i;
	int	j;
	int	k;

	i = ft_iterative_factorial(0);
	j = ft_iterative_factorial(-3);
	k = ft_iterative_factorial(5);
	printf("&d\n%d\n%d\n", i, j, k);
	return 0;
}

#include <stdio.h>
*/
