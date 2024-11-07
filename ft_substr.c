/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:25:12 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/07 16:34:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char	*cpy;
	unsigned int		str_length;

	str_length = 0;
	str_length = ft_strlen(s);
	cpy = malloc(sizeof(cpy) * (str_length + 1));
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
