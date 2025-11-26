/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:58:29 by khthiam           #+#    #+#             */
/*   Updated: 2025/11/23 12:18:51 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        memcpy - copy memory area
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <string.h>
** 
**        void *memcpy(void dest[restrict .n], const void src[restrict .n],
** 		    size_t n);
** 
** 
** DESCRIPTION
**        The memcpy() function copies n bytes from memory area src to memory area
**        dest.   The memory areas must not overlap.  Use memmove(3) if the memory
**        areas do overlap.
** 
** 
** DESCRIPTION
**        The memcpy() function copies n bytes from memory area src to memory area
**        dest.   The memory areas must not overlap.  Use memmove(3) if the memory
**        areas do overlap.
**
** ============================================================================
** Source: man memcpy - Extracted on 2025-11-23
** ============================================================================
*/
