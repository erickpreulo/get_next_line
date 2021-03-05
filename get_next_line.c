/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:13:18 by egomes            #+#    #+#             */
/*   Updated: 2021/03/05 15:53:05 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     get_next_line(int fd, char **line)
{
    char buf[BUFFERSIZE + 1];
    int lido;
    static char *str_salva;

    printf("o get_next_line comecou\n");
    *line = 0;
    lido = 1;
    str_salva = malloc(1);
    str_salva[0] = '\0';
    while (lido != '\n')
    {
        lido = read(fd, buf, BUFFERSIZE);
        buf[lido] = '\0';
        printf("[%d] - %s \n", lido, buf);
        str_salva = ft_strjoin(str_salva, buf);
        printf("STR_SALVA - %s \n", str_salva);

        // IF STR_SALVA TEM \N
            //BREAK


        // printf("o arquivo foi aberto");    
        // while (lido != '\n')
        // {
        //     printf("%s", &buf);
        //     x++;
        // }
        // if (buf[x] == '\0')
        //     break;
        // i++;
    }

    //*line = substring (str_salva, 0 at'e o \n) 
    //str_salva = substring(str_salva, '\n' + 1 at'e o fim)
    return (0);
}
