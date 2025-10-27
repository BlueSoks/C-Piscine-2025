/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 20:05:25 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/15 15:45:04 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else 
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
/*
int	main()
{
	int	i;
	int	j;
	int	k;

	i = ft_recursive_factorial(0);
	j = ft_recursive_factorial(-3);
	k = ft_recursive_factorial(5);
	printf("%d\n%d\n%d\n", i, j, k);
	return 0;
}
*/
