/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:22:07 by egomes            #+#    #+#             */
/*   Updated: 2021/03/05 14:01:25 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t     ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char        *ft_strdup(const char *s1)
{
    char *s2;
    size_t len;

    len = ft_strlen(s1);
    if (!(s1) || !(s2 = (char *)malloc(len + 1)))
        return (0);
    ft_memcpy(s2, s1, len);
    return (s2);
}

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t count;

    count = 0;
    while (count < n)
    {
	    ((unsigned char *)dst)[count] = ((unsigned char *)src)[count];
		count++;
	}
    return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	if (!s1 || !s2 ||
		!(new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
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
	return (new_str);
}
