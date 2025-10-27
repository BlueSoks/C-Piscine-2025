/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:28:17 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/17 14:50:42 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = -1;
	total = (size - 1) * ft_strlen(sep);
	while (++i < size)
		total += ft_strlen(strs[i]);
	return (total);
}

char	*memory_allocation(int size, char **strs, char *sep)
{
	char	*dest;
	int		total_len;

	total_len = ft_total_len(size, strs, sep);
	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		if (dest)
		{
			*dest = '\0';
			return (dest);
		}
	}
	else 
	{
		dest = (char *)malloc(sizeof(char) * (total_len + 1));
		if (!dest)
			return (NULL);
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = 0;
	dest = memory_allocation(size, strs, sep);
	if (!dest)
		return (NULL);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				dest[k++] = sep[j++];
		}
	}
	dest[k] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	*array[] = {"First", "Second", "Third"};
	char	*sep = ", ";
	char	*dest;

	dest = ft_strjoin(3, array, sep);
	printf("%s\n", dest);
	free(dest);
	return (0);
}
*/
