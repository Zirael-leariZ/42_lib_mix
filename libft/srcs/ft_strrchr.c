/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:29:41 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/23 10:56:04 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char			*p;
	unsigned char	uc;

	uc = (unsigned char)c;
	p = (void *)0;
	while (*s)
	{
		if (*s == uc)
			p = (void *)s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return ((char *)p);
}
