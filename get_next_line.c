/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:13:18 by egomes            #+#    #+#             */
/*   Updated: 2021/03/13 08:28:04 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int    endline(char *str)
{
    int i;

    i = 0;
    if (!str)
        return (0);
    while (str[i])
    {
        if (str[i] == '\n')
            return (1);
        i++;
    }
    return (0);
}

char    *get_line(char *str)
{
    int i;
    char *res;
    if (!str)
		return (NULL);
	i = ft_strlen_line(str);
	if (!(res = ft_newstr(i)))
		return (NULL);
    i = 0;
    while (str[i] && str[i] != '\n')
    {
        res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

char    *newline(char *str)
{
	char	*result;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	i = ft_strlen_line(str);
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	if (!(result = ft_newstr(ft_strlen(str) - i)))
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		result[j++] = str[i++];
	result[j] = '\0';
	free(str);
	return (result);
}

int     get_next_line(int fd, char **line)
{
    int r;
    char *buff;
    static char *new;

    if (!(buff = ft_newstr(BUFFER_SIZE)))
        return (-1);
    if (fd < 0 || !line || BUFFER_SIZE < 1 || read(fd, buff, 0) < 0)
    {
        free(buff);
        return (-1);
    }
    if (!new && !(new = ft_newstr(0)))
        return (-1);
    r = 1;
    while (!endline(new) && (r = read(fd, buff, BUFFER_SIZE)) != 0)
    {
        if (r == -1)
        {
            free(new);
            return (-1);
        }
        buff[r] = '\0';
        new = ft_strjoin(new, buff);
    }
    free(buff);
    *line = get_line(new);
    new = newline(new);
    return (r == 0 ? 0 : 1);
}