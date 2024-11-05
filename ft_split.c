#include "libft.h"

static int	count_words(const char *s, char c)
{
    int count;
    int in_word;

	count = 0;
	in_word = 0;
    while (*s) {
        if (*s != c && !in_word) {
            in_word = 1;
            count++;
        } else if (*s == c) {
            in_word = 0;
        }
        s++;
    }
    return (count);
}

static char*	get_next_word(const char **s, char c)
{
    const char *start;
    size_t len;
    char *word;
	size_t i;

    while (**s == c)
        (*s)++;
    start = *s;
    while (**s && **s != c)
        (*s)++;
    len = *s - start;
    word = (char *)malloc(len + 1);
    if (word == NULL)
        return NULL;
	i = 0;
	while(i < len)
	{
		word[i] = start[i];
		i++;
	}
    word[len] = '\0';
    return (word);
}

char**	ft_split(char const *s, char c)
{
    char **result;
    int word_count;
    int i;

	i = 0;
    if (!s)
        return NULL;
    word_count = count_words(s, c);
    if ((result = (char **)malloc((word_count + 1) * sizeof(char *))) == NULL)
        return NULL;
    while (i < word_count) {
        result[i] = get_next_word(&s, c);
        if (result[i] == NULL) {
            while (i-- > 0) {
                free(result[i]);
            }
            free(result);
            return NULL;
        }
        i++;
    }
    result[i] = NULL;
    return result;
}