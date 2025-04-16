/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:34:59 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/12 12:37:13 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *to, const void *from, size_t size)
{
	char	*dest;
	char	*src;

	dest = (char *)to;
	src = (char *)from;
	if (dest < src)
	{
		while (size--)
			*dest++ = *src++;
	}
	else if (dest > src)
	{
		dest += (size - 1);
		src += (size - 1);
		while (size--)
			*dest-- = *src--;
	}
	return (to);
}
