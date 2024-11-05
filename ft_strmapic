#include "libft.h"

char*	ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	int				length;

	if (!s || !f)
        return NULL;
	length = ft_strlen((char *)s);
	if( (result = (char *)malloc(length+1)) == NULL)
		return (NULL);
	i = 0;
	while( i < length)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[length] = '\0';
	return (result);
}