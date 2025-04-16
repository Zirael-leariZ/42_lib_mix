/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_va.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:16:42 by oishchen          #+#    #+#             */
/*   Updated: 2025/04/05 14:20:36 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_va(void *ptr)
{
	return (ft_putchar_va('0')
		+ ft_putchar_va('x')
		+ ft_puthex_va((unsigned long)ptr, 'x'));
}
