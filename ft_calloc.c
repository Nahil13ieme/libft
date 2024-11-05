#include "libft.h"

void*	ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;
    size_t total_size;

    total_size = nmemb * size;
    ptr = malloc(total_size);
    if (ptr == NULL)
        return (NULL);
	ft_bzero(ptr, total_size);
    return (ptr);
}