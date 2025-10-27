/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:12:27 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/15 11:13:51 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ex05/ft_atoi_base.c"

int	main(void)
{
	int		i;
	char	*str;
	char	*base;

	str = "    ----++ab128fjhkjh";
	base = "0123456789abcdef";
	i = ft_atoi_base(str, base);
	printf("%d\n", i);
	return (0);
}
