/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:07:41 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 14:56:10 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	is_lowercase(char c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_lowercase(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(is_lowercase(*(str + i))))
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
*/
