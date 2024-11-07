/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:25:12 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/07 12:08:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char	*cpy;
	unsigned int		str_length;

	str_length = ft_strlen(s);
	cpy = (char *)malloc(sizeof(*cpy) * (str_length + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (start + i < str_length && i < len)
	{
		cpy[i] = s[start + i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
