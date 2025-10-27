/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 12:08:23 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/20 12:09:19 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex05/ft_split.c"
#include <stdio.h>

void	ft_print_string_array(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
}

int	main()
{
	char *str = "First.,Second.Third ,Fourth.,.Fifth";
	char *charset = ",.";
	char **strs;
	strs = ft_split(str, charset);
	ft_print_string_array(strs);

	return 0;
}
