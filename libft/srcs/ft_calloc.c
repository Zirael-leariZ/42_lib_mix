/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:16:47 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/24 13:09:31 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	max_safe_count;

	if (size == 0 || count == 0)
	{
		res = malloc(0);
		if (!res)
			return (NULL);
		return (res);
	}
	max_safe_count = SIZE_MAX / size;
	if (count > max_safe_count)
	{
		ft_putstr_fd("Error: Memory allocation overflow detected!\n", 1);
		return (NULL);
	}
	res = (void *)(malloc (size * count));
	if (!res)
		return (NULL);
	ft_memset(res, 0, size * count);
	return (res);
}
