/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:10:05 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:11:07 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex11/ft_putstr_non_printable.c"

int	main()
{
	char	str[] = "Hello\nHow are you?";
	
	ft_putstr_non_printable(str);
	return 0;
}
