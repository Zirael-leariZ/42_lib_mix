/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_va.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:18:09 by oishchen          #+#    #+#             */
/*   Updated: 2025/04/05 14:18:19 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_va(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		return (ft_putstr_va("-2147483648"));
	if (nb < 0)
	{
		count += ft_putchar_va('-');
		nb = -nb;
	}
	if (nb >= 10)
		count += ft_putnbr_va(nb / 10);
	count += ft_putchar_va(DEC_BASE[nb % 10]);
	return (count);
}
