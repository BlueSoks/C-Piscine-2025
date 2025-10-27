/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:07:25 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/17 17:11:42 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>
*/
int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = -1;
	if (max <= min)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	while (++i < max - min)
		tab[i] = min + i;
	return (tab);
}

/*
void	print_tab(int tab[], int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		printf("%d\n", tab[i]);
	}
}

int	main()
{
	int	*tab;

	tab = ft_range(-5, 5);
	print_tab(tab, 10);
	free(tab);
	return (0);
}
*/
