/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:11:49 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/22 12:58:58 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft_display_file.h"

void	display_file(char *filename)
{
	int		fd;
	int		res;
	char	line[BUFFER_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		write(1, "Cannot read file.\n", 18);
	else 
	{
		res = read(fd, line, BUFFER_SIZE);
		while (res > 0)
		{
			write(1, line, res);
			res = read(fd, line, BUFFER_SIZE);
		}
	}
	close(fd);
}

int	main(int n, char **args)
{
	if (n < 2)
	{
		write(1, "File name missing.\n", 19);
		return (-1);
	}
	if (n > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (-1);
	}
	display_file(args[1]);
	return (0);
}
