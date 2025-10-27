/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:01:22 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/06 13:12:17 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	range;
	int	i;
	int	tmp;

	range = size / 2;
	i = 0;
	while (i < range)
	{
		tmp = *(tab + i);
		*(tab + i) = *(tab + size - i - 1);
		*(tab + size - i - 1) = tmp;
		i++;
	}
}
