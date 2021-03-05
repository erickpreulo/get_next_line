/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:13:18 by egomes            #+#    #+#             */
/*   Updated: 2021/03/04 23:13:54 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     get_next_line(int fd, char **line)
{
    char *buf;
    size_t x;
    size_t len;
    static int i;
    i = **line;

    
    x = 0;
    while (**line)
    {
        read (fd, &buf, ft_strlen(*line) + 1);
        while (buf[x] != '\n')
        {
            //printf("%c", &buf);
            x++;
        }
        if (buf[x] == '\0')
            break;
        i++;
    }
}
