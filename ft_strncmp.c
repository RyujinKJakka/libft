/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                      :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:01:20 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 15:57:34 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        strcmp, strncmp - compare two strings
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <string.h>
** 
**        int strcmp(const char *s1, const char *s2);
**        int strncmp(const char s1[.n], const char s2[.n], size_t n);
** 
** 
** DESCRIPTION
**        The strcmp() function compares the two strings s1 and s2.  The
**        locale is not taken into account (for a locale-aware comparison,
**        see strcoll(3)). The comparison is done using unsigned characters.
**
**        strcmp() returns an integer indicating the result of the
**        comparison, as follows:
**
**        •  0, if the s1 and s2 are equal;
**
**        •  a negative value if s1 is less than s2;
**
**        •  a positive value if s1 is greater than s2.
**
**        The strncmp() function is similar, except it compares only the
**        first (at most) n bytes of s1 and s2.
**
**
** DESCRIPTION
**        The strcmp() function compares the two strings s1 and s2.  The
**        locale is not taken into account (for a locale-aware comparison,
**        see strcoll(3)). The comparison is done using unsigned characters.
**
**        strcmp() returns an integer indicating the result of the
**        comparison, as follows:
**
**        •  0, if the s1 and s2 are equal;
**
**        •  a negative value if s1 is less than s2;
**
**        •  a positive value if s1 is greater than s2.
**
**        The strncmp() function is similar, except it compares only the
**        first (at most) n bytes of s1 and s2.
**
** ============================================================================
** Source: man strncmp - Extracted on 2025-11-23
** ============================================================================
*/
