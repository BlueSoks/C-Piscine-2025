/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:07:41 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 14:49:35 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	is_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_alpha(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(is_alpha(*(str + i))))
		{
			res = 0;
		}
		i++;
	}
	return (res);
}
/*
int	main()
{
	char	str[] = "Hello";
	char	str2[] = "123Hallo";
	int	i;
	int	j;

	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str2));
}
*/
