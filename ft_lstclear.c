/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:46:28 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/06 17:44:16 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((*lst)->next == NULL)
		return ;
	ft_lstclear((*lst)->next, del);
	del((*lst)->content);
	free((*lst));
	(*lst) = NULL;
}
