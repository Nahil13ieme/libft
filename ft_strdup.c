/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:24:21 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/06 15:33:46 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s);
	*copy = (char *)maloc(len + 1);
	if (*copy == NULL)
		return (NULL);
	while (*s)
	{
		*copy++ = *s++;
	}
	*copy = '\0';
	return (copy - len - 1);
}
