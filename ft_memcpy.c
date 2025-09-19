/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:34:21 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/19 16:34:24 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest , const void *src, size_t n) {
	size_t i; 
	char *dest_ptr = (char *)dest; 
	const char *src_ptr = (const char *)src; 

	i = 0; 
	while(i < n ) { 
		
		dest_ptr[i] = src_ptr[i]; 
		i++; 
	}
	return dest; 
 }; 