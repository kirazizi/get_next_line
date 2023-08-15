/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:21:14 by sbzizal           #+#    #+#             */
/*   Updated: 2022/11/23 19:46:03 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_read(int fd, char *keep);
size_t	ft_strlen(char *str);
int		ft_strchr( char *str, char c);
char	*ft_strdup( char *s);
char	*ft_strjoin(char *s1, char *s2);

#endif
