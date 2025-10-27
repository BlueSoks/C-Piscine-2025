/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:04:00 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:07:03 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex09/ft_strcapitalize.c"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}
