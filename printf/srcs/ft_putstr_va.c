/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_va.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:15:46 by oishchen          #+#    #+#             */
/*   Updated: 2025/04/05 14:16:23 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_va(char *str)
{
	int	count;

	if (!str)
		return (ft_putstr_va("(null)"));
	count = 0;
	while (*str)
	{
		count += ft_putchar_va(*str);
		str++;
	}
	return (count);
}
