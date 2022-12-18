/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:33:11 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/17 12:02:37 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
    int fd;
    int i;

    i = 0;
    fd = open("test.txt", O_RDONLY);
    while (i < 4)
    {
        //printf("%s", get_next_line(fd));
        get_next_line(fd);
        i++;
    }
}