/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 10:46:17 by egomes            #+#    #+#             */
/*   Updated: 2021/03/04 23:08:58 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     main(int argc, char **argv)
{
    int fd;

    if (argc <= 0)
        return (0);
    fd = open(argv[1], O_RDONLY);
    get_next_line(fd, **line);
}