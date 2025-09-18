#include "libft.h"

size_t	ft_strlen(char *string)
{
	size_t len;
	len = 0;
	while (string[len])
	{
		len++;
	}
	return (len);
}