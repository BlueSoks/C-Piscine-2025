/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main12.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:11:39 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/09 15:12:06 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex12/ft_print_memory.c"

int	main()
{
	char	*str = "Bonjour les aminches...c. est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. .";
	ft_print_memory(str, 110);
	return 0;
}
