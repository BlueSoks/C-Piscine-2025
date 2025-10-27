/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:03:00 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/23 18:05:45 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	ft_atoi(char *data)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (data[i] && data[i] >= '0' && data[i] <= '9')
	{
		res = res * 10 + data[i] - '0';
		i++;
	}
	return (res);
}

int	is_printable(char c)
{
	return (c < 127 && c > 31);
}

int	are_different(char c1, char c2, char c3)
{
	if (c1 == c2 || c2 == c3 || c1 == c3)
		return (0);
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*(str + size) != '\0')
	{
		size++;
	}
	return (size);
}
