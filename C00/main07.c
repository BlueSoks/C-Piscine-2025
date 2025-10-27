
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:25:43 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/06 11:09:23 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./ex07/ft_putnbr.c"

int	main()
{
	int	nb;

	nb = 15264785;
	ft_putnbr(nb);
	write(1, "\n", 1);

	nb = 0;
	ft_putnbr(nb);

	nb = -3421;
	ft_putnbr(nb);
	return 0;
}

