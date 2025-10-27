/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:53:39 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 14:56:25 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ex04/ft_str_is_lowercase.c"

int	main()
{
	char	*str = "sdfg";
	char	*str1 = "h90g";
	int	i;
	int	j;

	i = ft_str_is_lowercase(str);
	j = ft_str_is_lowercase(str1);
	printf("%d\n", i);
	printf("%d\n", j);
	return 0;
}
