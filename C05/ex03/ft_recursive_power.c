/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 20:25:33 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/10 20:29:01 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_recursive_power(int nb, int power)
{
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
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

/*
int	main()
{
	int	i;
	int	j;
	int	k;

	i = ft_recursive_power(2, 4);
	j = ft_recursive_power(0, 0);
	k = ft_recursive_power(10, -1);
	printf("%d\n%d\n%d\n", i, j, k);
	return 0;
}
*/
