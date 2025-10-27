/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:09:19 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/10 21:51:41 by bmaingot         ###   ########.fr       */
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

/*
int	main()
{
	int	i;
	int	j;
	int k;

	i = ft_is_prime(2);
	j = ft_is_prime(36);
	k = ft_is_prime(7);
	printf("%d\n%d\n%d\n", i, j, k);
	return 0;
}
*/
