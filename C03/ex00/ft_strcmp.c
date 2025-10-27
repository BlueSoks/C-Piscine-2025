/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:08:18 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 16:49:03 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

/*
int	main()
{
	char s1[] = "Hello";
	char s2[] = "Hello";
	char s3[] = "Hello not";
	int	i = 2;
	int	j = 2;
	int	k = 2;
	
	i = ft_strcmp(s1, s2);
	j = ft_strcmp(s2, s3);
	k = ft_strcmp(s3, s2);
	printf("%d\n%d\n%d\n", i, j, k);
	return 0;
}
*/
