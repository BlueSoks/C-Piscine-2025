/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:38:59 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/15 11:03:30 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_valid_base(char *base)
{
	unsigned int	size;
	int				i;
	int				j;

	i = 0;
	size = ft_strlen(base);
	if (size <= 1)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base [i] == '+' || base[i] == '-' || base[i] <= 32)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_recursive(int nbr, char *base, int size)
{
	if (nbr >= size)
		ft_putnbr_recursive(nbr / size, base, size);
	write(1, base + nbr % size, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	nb;

	size = ft_strlen(base);
	nb = nbr;
	if (!(ft_valid_base(base)))
	{
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nb = -nbr;
	}
	ft_putnbr_recursive(nb, base, size);
}
/*
int	main()
{
	char	*base = "0123456789abcdef";

	ft_putnbr_base(45678, base);
	ft_putnbr_base(-87943, base);
}
*/
