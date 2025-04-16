/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:26:08 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/29 16:16:07 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		s1len;
	char	*dup;

	s1len = ft_strlen(s1);
	dup = (char *)malloc(sizeof(char) * (s1len + 1));
	if (!dup)
		return (NULL);
	dup = ft_memcpy(dup, s1, s1len);
	dup[s1len] = '\0';
	return (dup);
}
