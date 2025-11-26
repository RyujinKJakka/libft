/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                       :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:37:03 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 14:17:49 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
		*p++ = (unsigned char) c;
	return (s);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        memset - fill memory with a constant byte
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <string.h>
** 
**        void *memset(void s[.n], int c, size_t n);
** 
** 
** DESCRIPTION
**        The memset() function fills the first n bytes of the memory area pointed
**        to by s with the constant byte c.
** 
** 
** DESCRIPTION
**        The memset() function fills the first n bytes of the memory area pointed
**        to by s with the constant byte c.
**
** ============================================================================
** Source: man memset - Extracted on 2025-11-23
** ============================================================================
*/
