/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:45:30 by oishchen          #+#    #+#             */
/*   Updated: 2025/04/10 18:54:47 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	arg;

	if (!str)
		return (-1);
	va_start(arg, str);
	count = count_char((char *)str, arg);
	va_end(arg);
	return (count);
}

int	count_char(char *str, va_list arg)
{
	int	count;

	if (write(1, str, 0) == -1)
		return (-1);
	count = 0;
	while (*str)
	{
		if (*str != '%')
			count += ft_putchar_va(*str);
		else
			count += ft_parse_va(&str, arg);
		if (count < 0)
			return (-1);
		str++;
	}
	return (count);
}

int	ft_parse_va(char **str, va_list arg)
{
	int	count;

	++(*str);
	count = 0;
	if (*(*str) == 'c')
		count += ft_putchar_va((char)va_arg(arg, int));
	else if (*(*str) == 's')
		count += ft_putstr_va(va_arg(arg, char *));
	else if (*(*str) == 'p')
		count += ft_putptr_va(va_arg(arg, void *));
	else if (*(*str) == 'd' || *(*str) == 'i')
		count += ft_putnbr_va(va_arg(arg, int));
	else if (*(*str) == 'u')
		count += ft_putunbr_va(va_arg(arg, unsigned int));
	else if (*(*str) == 'x')
		count += ft_puthex_va((unsigned long)va_arg(arg, unsigned int), 'x');
	else if (*(*str) == 'X')
		count += ft_puthex_va((unsigned long)va_arg(arg, unsigned int), 'X');
	else if (*(*str) == '%')
		count += ft_putchar_va('%');
	return (count);
}

// void compare(int orig, int mine, int test_n)
// {
// 	if (orig == mine)
// 		printf("%d TEST PASSED\n", test_n);
// 	else
// 		printf("%d TEST FAILED\n", test_n);
// }
// #include <limits.h>
// #include <stdio.h>
// int	main()
// {
// 	int	orig;
// 	int	mine;
// 	int	test_n;
// 	printf("TESTS FOR : CHAR\n");
// 	printf("------------------------------\n");
// 	test_n = 0;
// 	mine = ft_printf("simple print: %c\n", 'a');
// 	orig = printf("simple print: %c\n", 'a');
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("simple print: %c\n", '\0');
// 	orig = printf("simple print: %c\n", '\0');
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("multiple print: %c %cc\n", '\0', 'A');
// 	orig = printf("multiple print: %c %cc\n", '\0', 'A');
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	printf("TESTS FOR : STRING\n");
// 	printf("------------------------------\n");
// 	test_n = 0;
// 	mine = ft_printf("simple print: %s\n", "NORMAL STRING");
// 	orig = printf("simple print: %s\n", "NORMAL STRING");
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("simple print: %s\n", "  Space STRING   ");
// 	orig = printf("simple print: %s\n", "  Space STRING   ");
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("no string: %s\n", "");
// 	orig = printf("no string: %s\n", "");
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("multiple print: %s %s\n", NULL, "NORMAL STRING");
// 	orig = printf("multiple print: %s %s\n", NULL, "NORMAL STRING");
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	printf("TESTS FOR : DIGITS d\n");
// 	printf("------------------------------\n");
// 	test_n = 0;
// 	mine = ft_printf("simple print: %d\n", 0);
// 	orig = printf("simple print: %d\n", 0);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("max digit print: %d\n", 2,147,483,647);
// 	orig = printf("max digit print: %d\n", 2,147,483,647);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("over max digit print: %d\n", 2,147,483,648);
// 	orig = printf("over max digit print: %d\n", 2,147,483,648);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("min digit print: %d\n", -2,147,483,648);
// 	orig = printf("min digit print: %d\n", -2,147,483,648);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	printf("TESTS FOR : DIGITS i\n");
// 	printf("------------------------------\n");
// 	test_n = 0;
// 	mine = ft_printf("simple print: %i\n", 0);
// 	orig = printf("simple print: %i\n", 0);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("max digit print: %i\n", 2,147,483,647);
// 	orig = printf("max digit print: %i\n", 2,147,483,647);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("over max digit print: %i\n", 2,147,483,648);
// 	orig = printf("over max digit print: %i\n", 2,147,483,648);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("min digit print: %i\n", -2,147,483,648);
// 	orig = printf("min digit print: %i\n", -2,147,483,648);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	printf("TESTS FOR : POINTERS p (and also for hex x)\n");
// 	printf("------------------------------\n");
// 	test_n = 0;
// 	mine = ft_printf("-1: %p\n", -1);
// 	orig = printf("-1: %p\n", -1);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("1: %p\n", 1);
// 	orig = printf("1: %p\n", 1);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("LONG MIN, LONG MAX: %p %p\n", LONG_MIN, LONG_MAX);
// 	orig = printf("LONG MIN, LONG MAX: %p %p\n", LONG_MIN, LONG_MAX);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("INT MIN, INT MAX: %p %p\n", INT_MIN, INT_MAX);
// 	orig = printf("INT MIN, INT MAX: %p %p\n", INT_MIN, INT_MAX);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("ULONG_MAX, -ULONG_MAX: %p %p\n", ULONG_MAX, -ULONG_MAX);
// 	orig = printf("IULONG_MAX, -ULONG_MAX: %p %p\n", ULONG_MAX, -ULONG_MAX);
// 	compare (orig, mine, test_n);
// 	test_n++;
// 	mine = ft_printf("zero zero: %p %p\n", 0, 0);
// 	orig = printf("zero zero: %p %p\n", 0, 0);
// 	compare (orig, mine, test_n);
// }
