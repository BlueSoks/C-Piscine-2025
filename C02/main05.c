/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:56:30 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 14:56:53 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex05/ft_str_is_uppercase.c"
#include <stdio.h>

int	main()
{
	char	*str = "sdfg";
	char	*str1 = "HFSJK";
	int	i;
	int	j;

	i = ft_str_is_uppercase(str);
	j = ft_str_is_uppercase(str1);
	printf("%d\n", i);
	printf("%d\n", j);
	return 0;
}
