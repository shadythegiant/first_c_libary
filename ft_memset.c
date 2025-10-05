/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:03:54 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/19 16:03:57 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buffer, int c, size_t size)
{
	size_t		counter;
	unsigned	low8bits;
	char		*byt_ptr;

	counter = 0;
	low8bits = c & 0xFF;
	byt_ptr = (char *)buffer;
	while (counter < size)
	{
		byt_ptr[counter] = low8bits;
		counter++;
	}
	return (buffer); 
}
