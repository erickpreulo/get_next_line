/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 10:46:17 by egomes            #+#    #+#             */
/*   Updated: 2021/03/05 15:51:05 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     main(int argc, char **argv)
{
    int fd;
    char *line;
    (void)argv;
    
    if (argc != 2)
        printf("Erro no numero de argumentos\n");
    fd = open(argv[1], O_RDONLY);
    get_next_line(fd, &line);
    //printf("Linha: %s\n", line);
}
