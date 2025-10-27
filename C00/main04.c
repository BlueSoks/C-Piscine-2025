/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 11:26:16 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/16 14:22:49 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./ex04/ft_is_negative.c"

int	main()
{
	int	n;

	n = -1;
	ft_is_negative(n);
	n = 0;
	ft_is_negative(n);
	n = 2;
	ft_is_negative(n);
	return 0;
}


