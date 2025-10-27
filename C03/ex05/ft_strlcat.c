/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:26:02 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/15 10:42:12 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	size;

	size = 0;
	while (str[size])
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
	{
		return (size + len_src);
	}
	while (i < size - len_dest - 1 && src[i] != '\0')
	{
		dest[i + len_dest] = src[i];
		i++;
	}
	dest[i + len_dest] = '\0';
	return (len_dest + len_src);
}
/*
int	main(void)
{
	char	*src;
	char	dest[16] = "aaaaaaaaaa";

	src = "copy   ...";
	dest[2] = '\0';
	ft_strlcat(dest, src, 12);
	printf("%s\n", dest);
	return 0;
}
*/
