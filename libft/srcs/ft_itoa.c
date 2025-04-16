/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:53:51 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/24 10:25:49 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	n_size(int n)
{
	int			len;
	long long	a;

	len = 1;
	a = n;
	if (a < 0)
	{
		len++;
		a = a * (-1);
	}
	while (a >= 10)
	{
		a /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			size;
	char		*res;
	long long	a;

	a = n;
	size = n_size(n);
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (a < 0)
	{
		res[0] = '-';
		a *= -1;
	}
	else if (a == 0)
		res[0] = '0';
	res[size] = '\0';
	size--;
	while (a != 0)
	{
		res[size] = (a % 10) + '0';
		a /= 10;
		size--;
	}
	return (res);
}
