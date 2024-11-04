#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    char *array;
    unsigned int size;
    int i;
    int j;

    if (!s1 && !s2)
        return (NULL);
    size = ft_strlen(s1) + ft_strlen(s2);
    if (!(array = (char *)malloc(sizeof(char) * (size + 1))))
        return (NULL);
    i = 0;
    j = 0;
    if (s1)
    {
        while (s1[i])
            array[j++] = s1[i++];
        i = 0;
    }
    while (s2[i])
        array[j++] = s2[i++];
    array[size] = '\0';
    return (array);
}