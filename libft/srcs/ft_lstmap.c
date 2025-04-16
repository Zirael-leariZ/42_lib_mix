/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 13:18:06 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/29 10:19:56 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;
	void	*ccontent;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		ccontent = (*f)(lst->content);
		new = ft_lstnew(ccontent);
		if (!new)
		{
			del(ccontent);
			ft_lstclear(&result, del);
			free(new);
			return (NULL);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}
