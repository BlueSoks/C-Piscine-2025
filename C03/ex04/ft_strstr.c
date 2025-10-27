/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:22:49 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/16 13:03:47 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s2[i] 
		&& (unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	to_find_size;

	i = 0;
	to_find_size = 0;
	if (!*to_find)
		return (str);
	while (to_find[to_find_size] != '\0')
	{
		to_find_size++;
	}
	while (str[i] != '\0')
	{
		if (ft_strncmp(str + i, to_find, to_find_size - 1) == 0)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

/*
int main(void)
{
	char *text = "Hello, this is a simple test string.";
	char *word1 = "simple";
	char *word2 = "missing";
	char *res;

	res = ft_strstr(text, word1);
	if (res)
		printf("Found '%s' in text: %s\n", word1, res);
	else
		printf("'%s' not found in text.\n", word1);
		res = ft_strstr(text, word2);
	if (res)
		printf("Found '%s' in text: %s\n", word2, res);
	else
		printf("'%s' not found in text.\n", word2);
	return (0);
}
*/
