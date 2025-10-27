/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:55:46 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/10 19:25:34 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*(str + size) != '\0')
	{
		size++;
	}
	return (size);
}

/*
int	main(void)
{
	char	*str;
	int	l;

	l = strlen(str) - 1;
	str = "Great, I am doing it again.";
	ft_strlen(str);
	printf("%s\n", str);
	printf("%d\n", l);
	printf("%d", ft_strlen(str));
	return (0);
}
*/
