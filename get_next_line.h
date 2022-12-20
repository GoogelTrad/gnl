/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:23:06 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/20 13:04:10 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

#ifndef BUFFER_SIZE
    # define BUFFER_SIZE 1
#endif

 char	*get_next_line(int fd);
 int	ft_strlen(char *str);
 char	*ft_strcat(char *dest, char *src);
 char	*ft_strcpy(char *dest, char *src);
 void   reset_buffer(char *buffer);
 int    check_buffer(char **line, char *tmp);
 char	*ft_strncpy(char *dest, char *src, int n);
 char	*ft_strncat(char *dest, char *src, int n);


#endif