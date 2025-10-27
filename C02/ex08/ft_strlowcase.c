/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 12:16:18 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:03:50 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) <= 'Z') && (*(str + i) >= 'A'))
		{
			*(str + i) += 'a' - 'A';
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
		char	str[] = "Hello";

		printf("%s\n", str);
		ft_strlowcase(str);
		printf("%s\n", str);
}
*/
