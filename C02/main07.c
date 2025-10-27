/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:01:10 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:02:32 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ex07/ft_strupcase.c"

int	main(void)
{
		char	str[] = "Hello";

		printf("%s\n", str);
		ft_strupcase(str);
		printf("%s\n", str);
}
