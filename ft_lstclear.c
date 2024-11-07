/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:46:28 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/07 16:26:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if(!lst || *lst == NULL)
		return ;
	if ((*lst)->next != NULL)
		ft_lstclear(&(*lst)->next, del);
	del((*lst)->content);
	free((*lst));
	*lst = NULL;
}
