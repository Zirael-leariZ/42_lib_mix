/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:33:11 by oishchen          #+#    #+#             */
/*   Updated: 2025/05/14 08:21:59 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s)
	{
		if (*s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (NULL);
}

void	*ft_memcpy(void *to, const void *from, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*src_cpy;

	if (!to && !from)
		return (NULL);
	ptr = (unsigned char *)to;
	src_cpy = (unsigned char *)from;
	while (len--)
		*ptr++ = *src_cpy++;
	return (to);
}

char	*ft_strdup(const char *s1)
{
	int		s1len;
	char	*dup;

	s1len = (int)ft_strlen(s1);
	dup = (char *)malloc(sizeof(char) * (s1len + 1));
	if (!dup)
		return (NULL);
	dup = ft_memcpy(dup, s1, s1len);
	dup[s1len] = '\0';
	return (dup);
}

char	*ft_strjoin(char const *container, char const *buf)
{
	int		buf_len;
	int		container_len;
	char	*joined;

	buf_len = (int)ft_strlen(buf);
	container_len = (int)ft_strlen(container);
	joined = (char *)malloc(sizeof(char) * (buf_len + container_len + 1));
	if (!joined)
		return (NULL);
	ft_memcpy(joined, container, container_len);
	ft_memcpy(joined + container_len, buf, buf_len);
	joined[buf_len + container_len] = '\0';
	return (joined);
}
