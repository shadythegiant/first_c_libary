#include "libft.h"

size_t	ft_strlen(char *string)
{
	int len;
	len = 0;
	while (string[len])
	{
		len++;
	}
	return (len);
}