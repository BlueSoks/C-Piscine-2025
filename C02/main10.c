/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:09:08 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:09:49 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ex10/ft_strlcpy.c"

int	main()
{
	char	str[] = "Hello";
	char	dest[5];
	unsigned int	i;

	i = ft_strlcpy(dest, str, 6);
	printf("%s\n", dest);
	return 0;
}
