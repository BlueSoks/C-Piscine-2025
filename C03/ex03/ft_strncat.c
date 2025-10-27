/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:13:40 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/10 14:19:26 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' && j < nb)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}
/*
int	main()
{
	char	str[] = "String";
	char	str2[50] = "Concatenated";
	char	str3[50] = "Concatenated";

	printf("%s\n%s\n", str, str2);
	ft_strncat(str2, str, 3);
	ft_strncat(str3, str, 12);
	printf("%s\n%s\n", str, str2);
	printf("%s\n%s\n", str, str3);
	return 0;
}
*/
