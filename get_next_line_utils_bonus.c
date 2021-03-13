/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:39:16 by egomes            #+#    #+#             */
/*   Updated: 2021/03/13 08:22:42 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t     ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

size_t     ft_strlen_line(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] && str[i] != '\n')
        i++;
    return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	int		i;
	int		j;

	if (!s1 || !s2 ||
		!(new_str = ft_newstr(ft_strlen(s1) + ft_strlen(s2))))
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
    free((void*)s1);
	return (new_str);
}

char	*ft_newstr(size_t size)
{
	char	*str;

	if (!(str = malloc((size + 1) * sizeof(char))))
		return (NULL);
	str[size] = '\0';
	return (str);
}
