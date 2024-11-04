#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_l;
	unsigned int	src_l;
	unsigned int	result;
	unsigned int	i;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	result = 0;
	if (size > dest_l)
		result = src_l + dest_l;
	else
		result = src_l + size;
	if (size == 0)
		return (result);
	i = 0;
	while (src[i] && dest_l < size - 1)
	{
		dest[dest_l] = src[i];
		dest_l++;
		i++;
	}
	dest[dest_l] = '\0';
	return (result);
}
