#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>


int	ft_isalnum(int c); 
int	ft_isalpha(int c); 
int	ft_isascii(int c); 
int	ft_isdigit(int c); 
int	ft_isprint(int c); 
size_t	ft_strlen(char *string);
void	*ft_memset(void *buffer, int c, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);


#endif