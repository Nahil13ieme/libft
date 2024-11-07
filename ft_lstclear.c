/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:46:28 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/07 12:14:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((*lst)->next == NULL)
		return ;
	ft_lstclear(&(*lst)->next, del);
	del((*lst)->content);
	free((*lst));
	(*lst) = NULL;
}
