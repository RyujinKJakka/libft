/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                       :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:37:37 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 16:26:03 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        strlen - calculate the length of a string
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <string.h>
** 
**        size_t strlen(const char *s);
** 
** 
** DESCRIPTION
**        The  strlen() function calculates the length of the string pointed to by
**        s, excluding the terminating null byte ('\0').
** 
** 
** DESCRIPTION
**        The  strlen() function calculates the length of the string pointed to by
**        s, excluding the terminating null byte ('\0').
**
** ============================================================================
** Source: man strlen - Extracted on 2025-11-23
** ============================================================================
*/
