/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <cmichez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:33:11 by cmichez           #+#    #+#             */
/*   Updated: 2022/12/20 13:11:11 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
    int fd;
    char *toto;

    fd = open("test.txt", O_RDONLY);
    toto = get_next_line((fd));
    while (toto)
    {
        printf("%s",toto);
        toto = get_next_line((fd));
    }
    printf("%s",toto);
}