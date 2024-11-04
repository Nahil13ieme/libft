#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*cpy;
	int		str_length;

	str_length = ft_strlen(s);
	if (!(cpy = (char*)malloc(sizeof(*cpy) * (str_length + 1))))
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