/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 20:16:25 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/10 20:24:41 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}

/*
int	main()
{
	int	i;
	int	j;
	int	k;

	i = ft_iterative_power(2, 4);
	j = ft_iterative_power(0, 0);
	k = ft_iterative_power(10, -1);
	printf("%d\n%d\n%d\n", i, j, k);
	return 0;
}
*/
