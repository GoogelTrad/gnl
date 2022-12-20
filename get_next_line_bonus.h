/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:05:10 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/20 16:06:27 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
void	reset_buffer(char *buffer);
int		check_buffer(char **line, char *tmp);
char	*ft_strncpy(char *dest, char *src, int n);
char	*ft_strncat(char *dest, char *src, int n);

#endif