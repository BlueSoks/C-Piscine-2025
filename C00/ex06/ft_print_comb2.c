/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:45:56 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/07 10:15:03 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_2_digits(int n)
{
	char	unit;
	char	dozen;

	unit = n % 10 + '0';
	dozen = n / 10 + '0';
	write(1, &dozen, 1);
	write (1, &unit, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_2_digits(i);
			write(1, " ", 1);
			print_2_digits(j);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

/*
int	main()
{
	ft_print_comb2();
	return 0;
}
*/
