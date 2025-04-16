/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_va.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:17:20 by oishchen          #+#    #+#             */
/*   Updated: 2025/04/05 14:17:35 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_va(unsigned long ptr, char c)
{
	int	count;

	count = 0;
	if (c == 'X')
	{
		if (ptr >= 16)
			count += ft_puthex_va(ptr / 16, c);
		count += ft_putchar_va(UHEX_BASE[ptr % 16]);
		return (count);
	}
	else if (c == 'x')
	{
		if (ptr >= 16)
			count += ft_puthex_va(ptr / 16, c);
		count += ft_putchar_va(HEX_BASE[ptr % 16]);
	}
	return (count);
}
