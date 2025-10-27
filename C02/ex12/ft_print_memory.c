/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:06:53 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/16 15:14:01 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	print_hex(long nbr)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr >= 16)
	{
		print_hex(nbr / 16);
		print_hex(nbr % 16);
	}
	else
	{
		write(1, hex + nbr, 1);
	}
}

void	print_hex_content(char *addr, unsigned int size)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (i < size / 2)
	{
		write(1, hex + *(addr + i) / 16, 1);
		write(1, &hex[*(addr + i) % 16], 1);
		write(1, &hex[*(addr + i + 1) / 16], 1);
		write(1, &hex[*(addr + i + 1) % 16], 1);
		write(1, " ", 1);
		i++;
	}
	if (size % 2)
	{
		print_hex(*(addr + i));
		write(1, "   ", 3);
		i++;
	}
	while (i < 8)
	{
		write(1, "     ", 5);
		i++;
	}
}

void	print_content(char *addr, unsigned int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, addr + i, 1);
		i++;
	}
}

void	print_single_line(char *addr, unsigned int size)
{
	int		i;
	long	addr_int;

	addr_int = (long)addr;
	print_hex(addr_int);
	write(1, ": ", 2);
	print_hex_content(addr, size);
	print_content(addr, size);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*ptr;
	char	*cpy;

	ptr = (char *) addr;
	cpy = addr;
	while (size > 16)
	{
		print_single_line(cpy, 16);
		cpy += 16;
		size -= 16;
		write(1, "\n", 1);
	}
	if (size == 0)
	{
		return (addr);
	}
	print_single_line(cpy, size);
	return (addr);
}

int	main()
{
	char	*str = "Bonjour les aminc..lol.lol. .";
	ft_print_memory(str, 50);
	return 0;
}
