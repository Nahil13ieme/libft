#ifndef _LIBFT_H_
# define _LIBFT_H_

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_list
{
	void 			*content;
	struct s_list 	*next;
}					t_list;

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void*			ft_calloc(size_t nmemb, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char*			ft_itoa(int n);
void*			ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void*			ft_memcpy(void *dest, const void *src, size_t n);
void*			ft_memmove(void *dest, const void *src, size_t n);
void*			ft_memset(void *s, int c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_dl(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char**			ft_split(char const *s, char c);
char*			ft_strchr(char *str, int c);
char*			ft_strdup(const char *s);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char*			ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
char*			ft_strmapi(char const *s, char (*f)(unsigned int, char));
char*			ft_strnstr(const char *haystack, const char *needle, size_t n);
char*			ft_strrchr(const char *s, int c);
char*			ft_strtrim(char const *s1, char const *set);
char*			ft_substr(char const *s, unsigned int start, size_t len);
char*			ft_tolower(char *str);
char*			ft_toupper(char *str);

#endif _LIBFT_H_