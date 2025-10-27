/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:02:42 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:03:06 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ex08/ft_strlowcase.c"

int	main(void)
{
		char	str[] = "Hello";

		printf("%s\n", str);
		ft_strlowcase(str);
		printf("%s\n", str);
}

