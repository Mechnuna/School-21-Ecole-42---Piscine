/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:21:17 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/10 20:32:49 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_point
{
	unsigned	short	size;
	int					x;
	int					y;
}				t_point;

typedef	struct	s_settings
{

	int		file;
	char	empty;
	char	obstacle;
	char	full;
	int		rows;
	int		lines;
	t_point	max;
}				t_settings;

t_settings		g_maps;

int				find(char *str, char c);
char			*ft_strcpy(char *dest, char *src);
int				fill_cell(unsigned short **mass, int row, int col, char c);

int				check_map();
int				readline(char *buf);
unsigned short	min(unsigned short a, unsigned short b, unsigned short c);
void			set_max(unsigned short size, int x, int y);
void			ressset();

#endif
