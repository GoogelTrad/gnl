/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:23:08 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/20 12:45:29 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

char    *read_new_char(char *buffer, char *line)
{
	char	*res;
	int		i;
	
	i = 0;
	while (i < BUFFER_SIZE)
	{
		if (buffer[i] == '\n')
			break ;
		i++;
	}
	if (!line)
	{
		res = malloc(sizeof(char) * (i + 1));
		ft_strncpy(res, buffer, i + 1);
		reset_buffer(buffer);
		return (res);
	}
	res = malloc(sizeof(char) * (i + ft_strlen(line) + 1));
	ft_strcpy(res, line);
	ft_strncat(res, buffer, i + 1);
	reset_buffer(buffer);
	free(line);
	return (res);
}

char    *get_next_line(int fd)
{
	static char	tmp[BUFFER_SIZE + 1];
	char		*line;
	int			valeur_read;
	int			i;
	
	if (BUFFER_SIZE < 0)
		return (NULL);
	line = NULL;
	if (check_buffer(&line, tmp))
		return (line);
	tmp[BUFFER_SIZE] = '\0';
	valeur_read = read(fd, tmp, BUFFER_SIZE);
	while (valeur_read >= 1)
	{
		i = 0;
		line = read_new_char(tmp, line);
		while (line[i])
		{
			if(line[i] == '\n')
				return (line);
			i++;
		}
		valeur_read = read(fd, tmp, BUFFER_SIZE);
	}
	return (line);
}

void reset_buffer(char *buffer)
{
	int	i;

	while (buffer[0] && buffer[0] != '\n')
	{
		i = 0;
		while (buffer[i])
		{
			buffer[i] = buffer[i + 1];
			i++;
		}
	}
	i = 0;
	while (buffer[i])
	{
		buffer[i] = buffer[i + 1];
		i++;
	}
}

int check_buffer(char **line, char *tmp)
{
	int	i;
	int	j;

	i = 0;
	while (i <= BUFFER_SIZE)
	{
		if (tmp[i] != 0)
			break ;
		i++;
	}
	if (i > BUFFER_SIZE)
		return (0);
	j = i;
	while (tmp[j] && tmp[j] != '\n')
		j++;
	*line = malloc(sizeof(char) * (j - i));
	ft_strncpy(*line, tmp + i, (j - i) + 1);
	reset_buffer(tmp);
	if (j > BUFFER_SIZE)
		return (0);
	return (1);
}