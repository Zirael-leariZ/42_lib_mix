/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:45:44 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/22 15:57:39 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	is_find(char const *set, char find)
{
	while (*set)
	{
		if (*set == find)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		strt;
	int		fin;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	strt = 0;
	while (s1[strt] && is_find(set, s1[strt]))
		strt++;
	fin = ft_strlen(s1) - 1;
	if (strt == fin)
		return (ft_calloc(1, 1));
	while (fin > strt && is_find(set, s1[fin]))
		fin--;
	fin++;
	res = (char *)malloc((fin - strt + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + strt, fin - strt + 1);
	return (res);
}
