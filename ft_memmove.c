/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                      :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:48:24 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 17:56:07 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = dest;
	psrc = src;
	if (pdest < psrc)
	{
		while (n--)
			*pdest++ = *psrc++;
	}
	else
	{
		pdest += n;
		psrc += n;
		while (n--)
			*(--pdest) = *(--psrc);
	}
	return (dest);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        memmove - copy memory area
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <string.h>
** 
**        void *memmove(void dest[.n], const void src[.n], size_t n);
** 
** 
** DESCRIPTION
**        The  memmove()  function copies n bytes from memory area src to
**        memory area dest.  The memory areas may overlap: copying takes
**        place as though the bytes in src are first copied into a
**        temporary array that does not overlap src or dest, and the bytes
**        are then copied from the temporary array to dest.
**
**
** DESCRIPTION
**        The  memmove()  function copies n bytes from memory area src to
**        memory area dest.  The memory areas may overlap: copying takes
**        place as though the bytes in src are first copied into a
**        temporary array that does not overlap src or dest, and the bytes
**        are then copied from the temporary array to dest.
**
** ============================================================================
** Source: man memmove - Extracted on 2025-11-23
** ============================================================================
*/
