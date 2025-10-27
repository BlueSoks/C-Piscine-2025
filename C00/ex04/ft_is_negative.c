/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 15:52:06 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/03 18:48:26 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
	{
		c = 'P';
		write(1, &c, 1);
	}
	else
	{
		c = 'N';
		write(1, &c, 1);
	}
}

/*

int main()
{
	int n=-1;
	ft_is_negative(n);
	n=0;
	ft_is_negative(n);
	n=2;
	ft_is_negative(n);
	return 0;
}

*/
