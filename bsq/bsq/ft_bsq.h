/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaingot <bmaingot@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:20:06 by bmaingot          #+#    #+#             */
/*   Updated: 2025/09/24 09:50:50 by bmaingot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_map
{
	int		rows;
	int		cols;
	char	empty;
	char	obstacle;
	char	full;
	char	**grid;
}	t_map;

int		ft_atoi(char *data);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*read_file(int fd);
char	*cat_content(char *dest, char *src, int len_dest, int len_src);
char	*read_stdin(void);
t_map	*open_stdin(void);
t_map	*open_file(char *filename);
int		is_printable(char c);
int		are_different(char c1, char c2, char c3);
int		read_header(char *data, t_map *map);
int		column_count(char *data, t_map *map);
int		row_count(char *data, t_map *map);
int		fill_array(char *data, t_map *map);
void	free_grid(t_map *map);
t_map	*fill_map(char *data);
int		main_stdin(void);
void	display(t_map *map);
int		minimum(int a, int b, int c);
void	update_pos(int idx_r, int idx_c, int len, int *pos);
int		*mkarray(int size);
void	arraycpy(int *array1, int *array2, int size);
void	locate_sqr_1(int *pos, t_map *map, int *pre, int *cur);
void	locate_sqr(int *pos, t_map *map);
void	fill_sqr(char **grid, t_map *map);
void	ft_find_sqr(t_map *map);

#endif
