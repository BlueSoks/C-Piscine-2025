/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:25:52 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/10 19:27:45 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "./ex00/ft_strlen.c"

int	main(void)
{
	char	*str;

	str = "Great, I am doing it again.";
	printf("%s\n", str);
	printf("%d", ft_strlen(str));
	return (0);
}
