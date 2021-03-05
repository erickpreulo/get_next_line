/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:18:53 by egomes            #+#    #+#             */
/*   Updated: 2021/03/05 15:51:49 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFFERSIZE 10

int         get_next_line(int fd, char **line);
size_t      ft_strlen(const char *str);
char        *ft_strdup(const char *s1);
void        *ft_memcpy(void *dst, const void *src, size_t n);
char	    *ft_strjoin(char const *s1, char const *s2);

#endif
