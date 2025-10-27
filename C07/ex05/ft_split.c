/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:52:15 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/20 12:07:41 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_issep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
	{
		if (charset[i] == c)
			return (1);
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_issep(str[i], charset))
			i++;
		if (str[i] && !ft_issep(str[i], charset))
		{
			count++;
			while (str[i] && !ft_issep(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*ft_alloc_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !ft_issep(str[i], charset))
	{
		i++;
	}
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !ft_issep(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strs = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (!strs)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_issep(str[i], charset))
			i++;
		if (str[i] && !ft_issep(str[i], charset))
		{
			strs[j] = ft_alloc_word(str + i, charset);
			j++;
			while (str[i] && !ft_issep(str[i], charset))
				i++;
		}
	}
	strs[j] = 0;
	return (strs);
}

void	ft_print_string_array(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
}

int	main()
{
	char *str = "First.,Second.Third ,Fourth.,.Fifth";
	char *charset = ",.";
	char **strs;
	strs = ft_split(str, charset);
	ft_print_string_array(strs);

	return 0;
}
