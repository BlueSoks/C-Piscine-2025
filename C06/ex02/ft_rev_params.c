/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:36:47 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/15 12:44:19 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int	i;

	i = 0;
	while (i++ < n - 1)
	{
		ft_putstr(args[n - i]);
		write(1, "\n", 1);
	}
	return (0);
}
