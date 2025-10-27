/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:56:12 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/17 17:14:46 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = -1;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	while (++i < max - min)
		tab[i] = min + i;
	*range = tab;
	return (max - min);
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
	int	size;

	size = ft_ultimate_range(&tab, -5, 5);
	print_tab(tab, 10);
	printf("\n%d\n", size);
	return (0);
}
#include <stdio.h>
*/
