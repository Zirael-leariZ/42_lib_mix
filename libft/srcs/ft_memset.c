/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:04:46 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/11 18:58:50 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *src, int to, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)src;
	while (len--)
		*(ptr)++ = to;
	return (src);
}
