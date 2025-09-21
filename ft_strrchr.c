/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:51:22 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/21 20:51:25 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strrchr(char *s, int c) { 
	char *startptr = s; 
	char *endptr = s + ft_strlen(s) ;
	while(endptr >= startptr && *endptr != c) { 
		endptr--; 
	} 
	if(*endptr == c) { 
		return (char *)endptr; 
	}
	return (NULL);
}