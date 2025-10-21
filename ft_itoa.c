
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	ft_countdigits(int n)
{
	size_t	counter;
	long	nb;

	counter = 0;
	nb = n;
	if (nb == 0)
		return (1);
	if (n < 0)
	{
		counter++;
		nb = -nb;
	}
	while (nb)
	{
		nb = nb / 10;
		counter++;
	}
	return (counter);
}

static char	*ft_fillstr(char *s, int n)
{
	size_t	size;
	size_t	counter;
	size_t	start;
	long	nb;

	size = ft_countdigits(n);
	counter = size - 1;
	nb = n;
	if (nb < 0)
	{
		start = 1;
		nb = -nb;
		s[0] = '-';
	}
	else
		start = 0;
	while (counter >= start)
	{
		s[counter] = (nb % 10) + '0';
		nb = nb / 10;
		if (counter == start)
			break ;
		counter--;
	}
	s[size] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	size_t	digit_count;
	char	*str;

	digit_count = ft_countdigits(n);
	str = malloc(digit_count + 1);
	if (!str)
		return (NULL);
	str = ft_fillstr(str, n);
	return (str);
}

// Make sure this includes your ft_itoa prototype

int	main(void)
{
	size_t	count;
	int		n;
	char	*result;

	int test_values[] = {
		0,
		1,
		-1,
		42,
		-42,
		123456,
		-123456,
		2147483647, // INT_MAX
		-2147483648 // INT_MIN
	};
	count = sizeof(test_values) / sizeof(test_values[0]);
	for (size_t i = 0; i < count; i++)
	{
		n = test_values[i];
		result = ft_itoa(n);
		if (result == NULL)
		{
			printf("ft_itoa(%d) → NULL (allocation failed)\n", n);
		}
		else
		{
			printf("ft_itoa(%d) → \"%s\"\n", n, result);
			free(result); // Always free the allocated string
		}
	}
	return (0);
}
