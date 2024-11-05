#include "libft.h"

char*	ft_strtrim(char const *s1, char const *set)
{
    const char *start;
    const char *end;
    size_t len;
    char *trimmed;
    size_t i;

    while (*s1 && ft_strchr(set, *s1))
        s1++;
    start = s1;
    while (*s1)
        s1++;
    end = s1 - 1;
    while (end >= start && ft_strchr(set, *end))
        end--;
    len = end - start + 1;
    if ((trimmed = (char *)malloc(len + 1)) == NULL)
        return NULL;
    i = 0;
    while (i < len) {
        trimmed[i] = start[i];
        i++;
    }
    trimmed[len] = '\0';
    return trimmed;
}