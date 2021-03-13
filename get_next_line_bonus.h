/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:40:05 by egomes            #+#    #+#             */
/*   Updated: 2021/03/13 08:22:24 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
#define GET_NEXT_LINE_BONUS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int         get_next_line(int fd, char **line);
size_t      ft_strlen(const char *str);
char	    *ft_strjoin(char *s1, char *s2);
int         endline(char *str);
char	    *ft_newstr(size_t size);
char        *get_line(char *str);
char        *newline(char *str);
size_t      ft_strlen_line(const char *str);

#endif
