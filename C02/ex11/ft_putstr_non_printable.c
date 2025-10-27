/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:09:55 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/10 21:16:08 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char c)
{
	return (c <= 126 && c >= 32);
}

void	print_hex(long nbr)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, hex + nbr / 16, 1);
	write(1, hex + nbr % 16, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (is_printable(*(str + i)))
		{
			write(1, str + i, 1);
		}
		else
		{
			print_hex(*(str + i));
		}
		i++;
	}
}

/*
int	main()
{
	char	str[] = "Hello\nHow are you?";
	
	ft_putstr_non_printable(str);
	return 0;
}
*/
