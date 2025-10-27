/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:25:53 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/17 14:52:54 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_index_in_base(char c, char *base);
int	ft_baselen(char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_len_in_base(int nbr, char *base_to)
{
	int		i;
	int		len;

	i = 0;
	len = ft_baselen(base_to);
	if (nbr == 0)
	{
		i = 1;
	}
	if (nbr < 0)
		i++;
	while (nbr)
	{
		nbr /= len;
		i++;
	}
	return (i);
}

void	ft_itoa_base(char *nbr_to, int nbr_decimal, char *base_to)
{
	int	i;
	int	len;
	int	len_in_base;

	i = 1;
	len = ft_baselen(base_to);
	len_in_base = ft_len_in_base(nbr_decimal, base_to);
	nbr_to[len_in_base] = '\0';
	if (nbr_decimal == 0)
		nbr_to[0] = base_to[0];
	while (nbr_decimal)
	{
		if (nbr_decimal < 0)
		{
			nbr_to[0] = '-';
			nbr_to[len_in_base - i++] = base_to[-nbr_decimal % len];
			nbr_decimal = -nbr_decimal / len;
		}
		else
		{
			nbr_to[len_in_base - i++] = base_to[nbr_decimal % len];
			nbr_decimal = nbr_decimal / len;
		}
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		len;
	int		nbr_decimal;
	int		len_in_base;
	char	*nbr_to;

	len = ft_baselen(base_to);
	if (len <= 1 || ft_baselen(base_from) <= 1)
	{
		return (NULL);
	}
	nbr_decimal = ft_atoi_base(nbr, base_from);
	len_in_base = ft_len_in_base(nbr_decimal, base_to);
	nbr_to = malloc(sizeof(char) * (len_in_base + 1));
	if (!nbr_to)
		return (NULL);
	ft_itoa_base(nbr_to, nbr_decimal, base_to);
	return (nbr_to);
}

/*
int	main()
{
	char 	*base_from = "01";
	char 	*base_to = "0123456789abcdef";
	char	*nbr = "11111111";
	char	*nbr_to;

	nbr_to = ft_convert_base(nbr, base_from, base_to);
	printf("%s\n", nbr_to);
	free(nbr_to);
	return 0;
}
*/
