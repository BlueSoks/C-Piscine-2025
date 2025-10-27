/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:07:41 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:00:46 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	is_printable(char c)
{
	if (c <= 127 && c >= 32)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_printable(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(is_printable(*(str + i))))
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
*/
