/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:44:30 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/17 09:53:09 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memory_allocation(int nbr, char *base_to);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_baselen(char *base)
{
	int				i;
	int				j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base [i] == '+' || base[i] == '-' 
			|| base[i] <= 32 || base[i] == 127)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long	result;
	int		len;

	len = ft_baselen(base);
	i = 0;
	sign = 1;
	result = 0;
	if (len <= 1)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (ft_index_in_base(str[i++], base) >= 0)
		result = result * len + ft_index_in_base(str[i - 1], base);
	if ((sign == -1 && result > 2147483648) 
		|| (sign == 1 && result > 2147483647))
		return (0);
	return (sign * (int) result);
}
