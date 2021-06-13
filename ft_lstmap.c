/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:34:36 by gade-lim          #+#    #+#             */
/*   Updated: 2021/06/13 18:48:55 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*elem;

	if (f == NULL || lst == NULL)
		return (NULL);
	res = NULL;
	while (lst != NULL)
	{
		elem = ft_lstnew(f(lst->content));
		if (elem == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, elem);
		lst = lst->next;
	}
	return (res);
}
