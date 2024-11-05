#ifndef _LIBFT_H_
# define _LIBFT_H_

#include <stdlib.h>

int				ft_strlen(char *str);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char*			ft_strtrim(char const *s1, char const *set);
char*			ft_strjoin(char const *s1, char const *s2);
char*			ft_strchr(char *str, int c);
char*			ft_strnstr(const char *haystack, const char *needle, size_t n);
char*			ft_tolower(char *str);
char*			ft_toupper(char *str);
char*			ft_substr(char const *s, unsigned int start, size_t len);
void			ft_bzero(void *s, size_t n);
void*			ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void*			ft_memcpy(void *dest, const void *src, size_t n);
void*			ft_memmove(void *dest, const void *src, size_t n);
void*			ft_memset(void *s, int c, size_t n);

#endif _LIBFT_H_