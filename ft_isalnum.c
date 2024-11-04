#include "libft.h"

int	ft_isalnum(int c)
{
	return ( ft_isalpha(c) || ft_isnum(c));
}
