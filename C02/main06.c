/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:59:43 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 14:59:57 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex06/ft_str_is_printable.c"
#include <stdio.h>

int	main()
{
	char	*str = "sdfƒg";
	char	*str1 = "HFSJK";
	int	i;
	int	j;

	i = ft_str_is_printable(str);
	j = ft_str_is_printable(str1);
	printf("%d\n", i);
	printf("%d\n", j);
	return 0;
}
