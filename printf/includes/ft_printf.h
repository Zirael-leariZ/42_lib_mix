/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:22:22 by oishchen          #+#    #+#             */
/*   Updated: 2025/04/05 14:12:06 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

# define UHEX_BASE "0123456789ABCDEF"
# define HEX_BASE "0123456789abcdef"
# define DEC_BASE "0123456789"

int	ft_printf(const char *str, ...);
int	count_char(char *str, va_list arg);
int	ft_parse_va(char **str, va_list arg);
int	ft_putchar_va(char c);
int	ft_putstr_va(char *str);
int	ft_putptr_va(void *ptr);
int	ft_puthex_va(unsigned long ptr, char c);
int	ft_putunbr_va(unsigned int unb);
int	ft_putnbr_va(int nb);

#endif