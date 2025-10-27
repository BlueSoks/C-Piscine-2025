/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:33:46 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/08 11:08:54 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = 0;
	while (*(src + src_size) != '\0')
	{
		src_size++;
	}
	if (size == 0)
	{
		return (src_size);
	}
	while (i < size - 1 && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (src_size);
}

/*
int	main()
{
	char	str[] = "Hello";
	char	dest[5];
	unsigned int	i;

	i = ft_strlcpy(dest, str, 6);
	printf("%s\n", dest);
	return 0;
}
*/
