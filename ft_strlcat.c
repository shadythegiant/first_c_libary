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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_counter;
	size_t	dest_len;

	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	src_counter = 0;
	while (src[src_counter] && (dest_len + src_counter + 1) < size)
	{
		dest[dest_len + src_counter] = src[src_counter];
		src_counter++;
	}
	dest[dest_len + src_counter] = '\0';
	return (dest_len + ft_strlen(src));
}
