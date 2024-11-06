/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:59:24 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/06 17:02:11 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newLst;

	newLst = (t_list)malloc(sizeof(t_list));
	if(newLst == NULL)
		return ;
	while(lst)
	{
		newLst->content = f(lst->content);
		
	}
}