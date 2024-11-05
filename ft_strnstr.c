#include "libft.h"

char*	ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t needle_len;

	needle_len = ft_strlen(needle);
	if ( *needle == "\0")
		return (*haystack);

	while (n && *haystack) {
        if (n < needle_len) {
            return NULL;
        }
        if (*haystack == *needle && !ft_memcmp(haystack, needle, needle_len)) {
            return (char *)haystack;
        }
        haystack++;
        n--;
    }

    return NULL;
}