/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:13:43 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:14:02 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex00/ft_ft.c"
#include <stdio.h>

void ft_ft(int *nbr);

int	main(void)
{
	int	a;
	int	*nbr;

	nbr = &a;
	a = 0;
	ft_ft(nbr);
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%p\n",nbr);
	return (0);
}
