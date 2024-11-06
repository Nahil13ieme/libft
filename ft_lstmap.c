/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:59:24 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/06 17:45:14 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*first_elem;

	if (!lst || !f || !del)
		return (NULL);
	first_elem = ft_lstnew(f(lst->content));
	if (!first_elem)
		return (NULL);
	lst = lst->next;
	new_lst = lst;
	while (lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (!new_lst)
		{
			ft_lstclear(&first_elem, del);
			return (NULL);
		}
		lst = lst->next;
		new_lst = lst;
	}
	return (first_elem);
}