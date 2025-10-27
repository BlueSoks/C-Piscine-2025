/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:45:52 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/15 13:17:58 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

int	is_sorted(char **args, int size)
{
	int	i;

	i = -1;
	while (++i < size - 1)
	{
		if (ft_strcmp(args[i], args[i + 1]) > 0)
			return (0);
	}
	return (1);
}

void	ft_sort_char_tab(char **args, int size)
{
	int		i;
	char	*tmp;

	while (!is_sorted(args, size))
	{
		i = -1;
		while (++i < size - 1)
		{
			if (ft_strcmp(args[i], args[i + 1]) > 0)
			{
				tmp = args[i];
				args[i] = args[i + 1];
				args[i + 1] = tmp;
			}
		}
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, str + i, 1);
		i++;
	}
}

int	main(int n, char **args)
{
	int		i;

	i = 0;
	ft_sort_char_tab(args + 1, n - 1);
	while (i++ < n - 1)
	{
		ft_putstr(args[i]);
		write(1, "\n", 1);
	}
	return (0);
}
