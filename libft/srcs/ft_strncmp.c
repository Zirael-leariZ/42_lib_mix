/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:45:12 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/11 18:59:24 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	while (size && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		size--;
	}
	if (size == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
