/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:35:58 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/12 11:57:59 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*ptr;
	unsigned char	c_cpy;

	ptr = (unsigned char *)block;
	c_cpy = (unsigned char)c;
	while (size--)
	{
		if (*ptr == c_cpy)
			return ((void *)ptr);
		ptr++;
	}
	return ((void *)0);
}
