/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:52:44 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/10 22:08:26 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	else
	{
		while (i < nb)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	int	flag;
	int	i;

	flag = 0;
	i = 1;
	while (flag == 0)
	{
		if (ft_is_prime(nb + i))
		{
			return (nb + i);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	int	i;
	int	j;

	i = ft_find_next_prime(-1);
	j = ft_find_next_prime(38);
	printf("%d\n%d\n", i, j);
	return 0;
}
*/
