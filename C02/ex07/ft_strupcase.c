/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 11:54:32 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:02:29 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) <= 'z') && (*(str + i) >= 'a'))
		{
			*(str + i) += 'A' - 'a';
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
		ft_strupcase(str);
		printf("%s\n", str);
}
*/
