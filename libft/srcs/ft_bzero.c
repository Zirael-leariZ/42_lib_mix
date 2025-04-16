/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:21:05 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/11 19:43:20 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *block, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)block;
	i = 0;
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
}
