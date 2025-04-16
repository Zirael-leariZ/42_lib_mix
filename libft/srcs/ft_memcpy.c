/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:49:34 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/29 15:36:36 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
