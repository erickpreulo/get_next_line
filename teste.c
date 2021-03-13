/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 10:46:17 by egomes            #+#    #+#             */
/*   Updated: 2021/03/12 21:29:17 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include "get_next_line.h"

int     main(int argc, char **argv)
{
    int fd;
    char *line;
    int ret;
    int i;
    
    if (argc < 1)
        printf("erro no numero de argumentos.");
    i = 1;
    while (argv[i])
    {
        fd = open(argv[i], O_RDONLY);
        ret = 1;
        while (ret > 0)
        {
            ret = get_next_line(fd, &line);
            printf("[%d] %s\n", ret, line);
            free(line);
        }
        i++;
    }
}
