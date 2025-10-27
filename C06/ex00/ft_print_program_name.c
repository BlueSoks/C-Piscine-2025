/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 22:34:01 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/10 22:40:21 by bmaingot         ###   ########.fr       */
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
	if (n >= 0)
	{
		ft_putstr(args[0]);
		write(1, "\n", 1);
	}
	return (0);
}
