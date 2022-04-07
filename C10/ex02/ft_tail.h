/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:26:00 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/02 21:49:19 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H
# define BUF_SIZE 240
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>
# include <stdlib.h>
#endif

void	ft_putstr(char *c);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcatch(char *dest, char src);
int		ft_strlen(char *str);
void ft_error(char *c, char *path);
int		ft_atoi(char *str);
int		ft_putchar(char c);
