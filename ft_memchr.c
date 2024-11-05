#include "libft.h"

void*	ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p;

	p = (const unsigned char *)s;
	while(n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}

	return (NULL);
}