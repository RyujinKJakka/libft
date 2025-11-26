/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:07:29 by khthiam           #+#    #+#             */
/*   Updated: 2025/11/26 14:49:54 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        memchr, memrchr, rawmemchr - scan memory for a character
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <string.h>
** 
**        void *memchr(const void s[.n], int c, size_t n);
**        void *memrchr(const void s[.n], int c, size_t n);
** 
**        [[deprecated]] void *rawmemchr(const void *s, int c);
** 
**    Feature Test Macro Requirements for glibc (see feature_test_macros(7)):
** 
**        memrchr(), rawmemchr():
** 	   _GNU_SOURCE
** 
** 
** DESCRIPTION
**        The  memchr()  function scans the initial n bytes of the
**        memory area pointed to by s for the first instance of c. Both c
**        and the bytes of the memory area pointed to by s are interpreted
**        as unsigned char.
**
**        The  memrchr()  function is like the memchr() function, except
**        that it searches backward from the end of the n bytes pointed to
**        by s instead of forward from the beginning.
**
**        The rawmemchr() function is similar to memchr(), but it assumes
**        (i.e., the programmer knows for certain) that an instance of c
**        lies somewhere in the memory area starting at the location
**        pointed to by s. If an instance of c is not found, the behavior
**        is undefined. Use either strlen(3) or memchr(3) instead.
** 
** 
** DESCRIPTION
**        The  memchr()  function scans the initial n bytes of the
**        memory area pointed to by s for the first instance of c. Both c
**        and the bytes of the memory area pointed to by s are interpreted
**        as unsigned char.
**
**        The  memrchr()  function is like the memchr() function, except
**        that it searches backward from the end of the n bytes pointed to
**        by s instead of forward from the beginning.
**
**        The rawmemchr() function is similar to memchr(), but it assumes
**        (i.e., the programmer knows for certain) that an instance of c
**        lies somewhere in the memory area starting at the location
**        pointed to by s. If an instance of c is not found, the behavior
**        is undefined. Use either strlen(3) or memchr(3) instead.
**
** ============================================================================
** Source: man memchr - Extracted on 2025-11-23
** ============================================================================
*/
