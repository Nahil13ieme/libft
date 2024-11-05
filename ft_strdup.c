#include "libft.h"

char*	ft_strdup(char const *s)
{
    size_t len;
    char *copy;

	len = ft_strlen(s);
    if ((*copy = (char *)malloc(len + 1)) == NULL)
        return (NULL);
    while (*s) {
        *copy++ = *s++;
    }
    *copy = '\0';
    return (copy - len - 1);
}