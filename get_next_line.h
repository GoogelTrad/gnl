/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:23:06 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/17 11:49:51 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFFER_SIZE 10

 char	*get_next_line(int fd);
 int	ft_strlen(char *str);
 char	*ft_strcat(char *dest, char *src);
 char	*ft_strcpy(char *dest, char *src);

#endif