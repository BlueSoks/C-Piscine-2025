/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:43:58 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:17:32 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./ex01/ft_strncpy.c"

int	main()
{
	char	*src = "Hello";
	char	dest[50];

	write(1, src, 5);
	ft_strncpy(dest, src, 3);
	write(1, dest, 3);
	return 0;
}
