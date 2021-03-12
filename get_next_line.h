/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:18:53 by egomes            #+#    #+#             */
/*   Updated: 2021/03/11 13:33:56 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int         get_next_line(int fd, char **line);
size_t      ft_strlen(const char *str);
char	    *ft_strjoin(char const *s1, char const *s2);
int         endline(char *str);
char	    *ft_newstr(size_t size);
char        *get_line(char *str);
char        *newline(char *str);
size_t      ft_strlen_line(const char *str);

#endif
