#include "libft.h"

char*	ft_strrchr(const char *s, int c)
{
	const char *last_occurrence;
    last_occurrence = NULL;

    while (*s) { 
        if (*s == (char)c) {
            last_occurrence = s;
        }
        s++;
    }

    return (char *)last_occurrence;
}