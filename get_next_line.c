/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:23:08 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/17 12:05:21 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *read_new_char(char *buffer, char *line)
{
    char    *res;
    int     i;
    
    i = 0;
    while (i < BUFFER_SIZE)
        if (buffer[i++] == '\n')
            break ;
    if (!line)
    {
        res = malloc(sizeof(char) * (i + 1));
        ft_strcpy(res, buffer);
        return (res);
    }
    res = malloc(sizeof(char) * (i + ft_strlen(line) + 1));
    ft_strcpy(res, line);
    ft_strcat(res, buffer);
    free(line);
    return (res);
}

char    *get_next_line(int fd)
{
    static char tmp[BUFFER_SIZE + 1];
    char *line;
    int valeur_read;
    int i;
    
    valeur_read = 0;
    tmp[BUFFER_SIZE] = '\0';
    valeur_read = read(fd, tmp, BUFFER_SIZE);
    line = NULL;
    while (valeur_read >= 1)
    {
        i = 0;
        line = read_new_char(tmp, line);
        printf("tmp = %s\n", tmp);
        printf("line = %s\n", line);
        while(line[i])
        {
            if(line[i] == '\n')
                return (line);
            i++;
        }
        valeur_read = read(fd, tmp, BUFFER_SIZE);
    }

    return (line);
}
