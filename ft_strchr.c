#include "libft.h"

char*	ft_strchr(char *str, int c)
{
	while (*str != (char)c) {
        if (*str == '\0') {
            return NULL;
        }
        str++;
    }
    return (char *)str;
}