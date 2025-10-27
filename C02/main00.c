/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:42:55 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:15:40 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex00/ft_strcpy.c"

int	main()
{
	char	*src = "Hello";
	char	dest[50];

	write(1, src, 5);
	ft_strcpy(dest, src);
	write(1, dest, 5);
	return 0;
}
