/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 16:29:35 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/20 16:29:37 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size) {
	size_t counter;
	size_t src_len; 
	size_t dest_len; 

	src_len = ft_strlen(src); 
	dest_len = ft_strlen(dest); 
	counter = 0; 
	if( size <= dest_len) 
		return (size + src_len); 
	
	while(src[j] && (dest_len + j) < size - 1) {
		dest[dest_len + j ] = src[j]; 
		j++;  
	}
	dest[dest_len + j ] = '\0'; 
	return( src_len + dest_len); 
}
