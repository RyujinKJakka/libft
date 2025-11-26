/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:39:10 by khthiam           #+#    #+#             */
/*   Updated: 2025/11/26 14:48:35 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        strchr, strrchr, strchrnul - locate character in string
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <string.h>
** 
**        char *strchr(const char *s, int c);
**        char *strrchr(const char *s, int c);
** 
**        #define _GNU_SOURCE	   (See feature_test_macros(7))
**        #include <string.h>
** 
**        char *strchrnul(const char *s, int c);
** 
** 
** DESCRIPTION
**        The  strchr()  function returns a pointer to the first occurrence
**        of the character c in the string s.
**
**        The strrchr() function returns a pointer to the last occurrence
**        of the character c in the string s.
**
**        The  strchrnul() function is like strchr() except that if c is
**        not found in s, then it returns a pointer to the null byte at
**        the end of s, rather than NULL.
**
**        Here "character" means "byte"; these functions do not work with
**        wide or multibyte characters.
** 
** 
** DESCRIPTION
**        The  strchr()  function returns a pointer to the first occurrence
**        of the character c in the string s.
**
**        The strrchr() function returns a pointer to the last occurrence
**        of the character c in the string s.
**
**        The  strchrnul() function is like strchr() except that if c is
**        not found in s, then it returns a pointer to the null byte at
**        the end of s, rather than NULL.
**
**        Here "character" means "byte"; these functions do not work with
**        wide or multibyte characters.
**
** ============================================================================
** Source: man strchr - Extracted on 2025-11-23
** ============================================================================
*/
