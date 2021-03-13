/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 21:43:02 by egomes            #+#    #+#             */
/*   Updated: 2021/03/13 01:09:28 by egomes           ###   ########.fr       */
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

size_t     ft_strlen_line(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] && str[i] != '\n')
        i++;
    return (i);
}

void	*ft_memcpy(char *dst, char *src, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		dst[count] = src[count];
		count++;
	}
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	int		i;
	int		j;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2 ||
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

char	*ft_strdup(char *s1)
{
	char *s2;

	if (!(s2 = (char *)malloc(ft_strlen(s1) + 1)))
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
