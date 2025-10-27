/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:01:44 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 17:11:40 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (*(s1 + i) != '\0' || *(s2 + i) != '\0'))
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}
	return (0);
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
	
	i = ft_strncmp(s1, s2, 4);
	j = ft_strncmp(s2, s3, 4);
	k = ft_strncmp(s3, s2, 6);
	printf("%d\n%d\n%d\n", i, j, k);
	return 0;
}
*/
