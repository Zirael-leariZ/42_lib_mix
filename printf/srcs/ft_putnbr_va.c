/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_va.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:17:49 by oishchen          #+#    #+#             */
/*   Updated: 2025/04/05 14:17:58 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_va(unsigned int unb)
{
	int	count;

	count = 0;
	if (unb >= 10)
		count += ft_putunbr_va(unb / 10);
	count += ft_putchar_va(DEC_BASE[unb % 10]);
	return (count);
}
