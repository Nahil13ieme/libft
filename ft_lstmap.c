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

	new_lst = ft_lstnew(f(lst->content));
	first_elem = new_lst;
	if (new_lst == NULL)
		return (NULL);
	while (lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (new_lst == NULL)
		{
			ft_lstclear(*new_lst, del);
			return (NULL);
		}
		lst = lst->next;
		new_lst = new_lst->next;
	}
	new_lst = first_elem;
	return (new_lst);
}
