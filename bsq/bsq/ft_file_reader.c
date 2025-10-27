/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_reader.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:10:31 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/23 18:12:54 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char	*cat_content(char *dest, char *src, int len_dest, int len_src)
{
	char	*new;
	int		i;

	i = -1;
	new = malloc(sizeof(char) * (len_src + len_dest + 1));
	if (!new)
		return (NULL);
	while (++i < len_dest)
		new[i] = dest[i];
	free(dest);
	i = -1;
	while (++i < len_src)
		new[i + len_dest] = src[i];
	new[len_dest + len_src] = '\0';
	return (new);
}

char	*read_file(int fd)
{
	int		total;
	int		bytes;
	char	*content;
	char	buffer[4096];

	content = NULL;
	total = 0;
	bytes = read(fd, buffer, 4096);
	while (bytes > 0)
	{
		content = cat_content(content, buffer, total, bytes);
		if (!content)
			return (NULL);
		total += bytes;
		bytes = read(fd, buffer, 4096);
	}
	return (content);
}

char	*read_stdin(void)
{
	int		total;
	int		bytes;
	char	*content;
	char	buffer[4096];

	content = NULL;
	total = 0;
	bytes = read(0, buffer, 4096);
	while (bytes > 0)
	{
		content = cat_content(content, buffer, total, bytes);
		if (!content)
			return (NULL);
		total += bytes;
		bytes = read(0, buffer, 4096);
	}
	return (content);
}

int	read_header(char *data, t_map *map)
{
	int	nb_rows;
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(data);
	nb_rows = ft_atoi(data);
	if (!nb_rows)
		return (0);
	while (data[i] && data[i] <= '9' && data[i] >= '0')
		i++;
	if ((len - i) != 3)
		return (0);
	if (!is_printable(data[len - 1]) || !is_printable(data[len - 2])
		|| !is_printable(data[len - 3]) 
		|| !are_different(data[len - 1], data[len - 2], data[len - 3]))
		return (0);
	map->rows = nb_rows;
	map->full = data[len - 1];
	map->obstacle = data[len - 2];
	map->empty = data[len - 3];
	return (1);
}
