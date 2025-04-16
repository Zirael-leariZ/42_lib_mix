/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:35:33 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/29 16:21:05 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		flen;
	char		*word;

	flen = ft_strlen(s);
	if (flen <= start || len == 0)
		return (ft_calloc(1, 1));
	if (len > flen - start)
		len = flen - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word = ft_memcpy(word, (s + start), len);
	word[len] = '\0';
	return (word);
}
