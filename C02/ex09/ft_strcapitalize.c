/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 12:21:12 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:48:22 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
*/
int	is_alpha_or_number(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) <= 'Z') && (*(str + i) >= 'A'))
		{
			*(str + i) += 'a' - 'A';
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if ((*str <= 'z') && (*str >= 'a'))
	{
		*str += 'A' - 'a';
	}
	if (*(str + 1) == '\0')
	{
		return (str);
	}
	while (*(str + i + 1) != '\0')
	{
		if (!is_alpha_or_number(*(str + i)))
		{
			if ((*(str + i + 1) <= 'z') && (*(str + i + 1) >= 'a'))
			{
				*(str + i + 1) += 'A' - 'a';
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}
*/
