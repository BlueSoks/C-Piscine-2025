/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:51:00 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 14:52:09 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex03/ft_str_is_numeric.c"
#include <stdio.h>

int	main()
{
	char	str[] = "Hello";
	char	str2[] = "123";
	int	i;
	int	j;

	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(str2));
}
