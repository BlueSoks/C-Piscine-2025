/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:45:21 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 14:50:15 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex02/ft_str_is_alpha.c"
#include <stdio.h>

int	main()
{
	char	str[] = "Hello";
	char	str2[] = "123Hallo";
	int	i;
	int	j;

	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str2));
}
