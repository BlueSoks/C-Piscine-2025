/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:07:41 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 14:53:32 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_numeric(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(is_numeric(*(str + i))))
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
	char	str2[] = "123";
	int	i;
	int	j;

	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(str2));
}
*/
