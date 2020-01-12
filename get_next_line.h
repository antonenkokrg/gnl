/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:46:05 by ilya              #+#    #+#             */
/*   Updated: 2020/01/11 14:46:41 by ilya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 16
# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_arr
{
	int				fd;
	char			*rest;
	struct s_arr	*next;
}					t_arr;

t_arr				*ft_newlist(const int fd);
char				*checkrest(char **p_n, char *rest);
int					get_line(const int fd, char **line, char *rest);
int					get_next_line(const int fd, char **line);

#endif
