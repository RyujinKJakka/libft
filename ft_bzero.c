/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                        :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:46:40 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 17:44:50 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        bzero, explicit_bzero - zero a byte string
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <strings.h>
** 
**        void bzero(void s[.n], size_t n);
** 
**        #include <string.h>
** 
**        void explicit_bzero(void s[.n], size_t n);
** 
** 
** DESCRIPTION
**        The bzero() function erases the data in the n bytes of the memory
**        starting at the location pointed to by s, by writing zeros (bytes
**        containing '\0') to that area.
**
**        The explicit_bzero() function performs the same	task as bzero().
**        It differs from bzero() in that it guarantees that compiler
**        optimizations will not remove the erase operation if the compiler
**        deduces that the operation is "unnecessary".
**
**
** DESCRIPTION
**        The bzero() function erases the data in the n bytes of the memory
**        starting at the location pointed to by s, by writing zeros (bytes
**        containing '\0') to that area.
**
**        The explicit_bzero() function performs the same	task as bzero().
**        It differs from bzero() in that it guarantees that compiler
**        optimizations will not remove the erase operation if the compiler
**        deduces that the operation is "unnecessary".
**
** ============================================================================
** Source: man bzero - Extracted on 2025-11-23
** ============================================================================
*/
