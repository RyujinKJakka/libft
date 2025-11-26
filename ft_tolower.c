/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                      :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:58:55 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 16:35:15 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        toupper, tolower, toupper_l, tolower_l - convert uppercase or lowercase
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <ctype.h>
** 
**        int toupper(int c);
**        int tolower(int c);
** 
**        int toupper_l(int c, locale_t locale);
**        int tolower_l(int c, locale_t locale);
** 
**    Feature Test Macro Requirements for glibc (see feature_test_macros(7)):
** 
**        toupper_l(), tolower_l():
** 	   Since glibc 2.10:
** 	       _XOPEN_SOURCE >= 700
** 	   Before glibc 2.10:
** 	       _GNU_SOURCE
** 
** 
** DESCRIPTION
**        These functions convert lowercase letters to uppercase, and vice versa.
** 
**        If  c is a lowercase letter, toupper() returns its uppercase equivalent,
**        if an uppercase representation exists in the current locale.  Otherwise,
**        it returns c.  The toupper_l() function performs the same task, but uses
**        the locale referred to by the locale handle locale.
** 
**        If c is an uppercase letter, tolower() returns its lowercase equivalent,
**        if a lowercase representation exists in the current locale.   Otherwise,
**        it returns c.  The tolower_l() function performs the same task, but uses
**        the locale referred to by the locale handle locale.
** 
**        If  c  is  neither an unsigned char value nor EOF, the behavior of these
**        functions is undefined.
** 
**        The behavior of toupper_l() and tolower_l() is undefined	 if  locale  is
**        the  special locale object LC_GLOBAL_LOCALE (see duplocale(3)) or is not
**        a valid locale object handle.
** 
** 
** DESCRIPTION
**        These functions convert lowercase letters to uppercase, and vice versa.
** 
**        If  c is a lowercase letter, toupper() returns its uppercase equivalent,
**        if an uppercase representation exists in the current locale.  Otherwise,
**        it returns c.  The toupper_l() function performs the same task, but uses
**        the locale referred to by the locale handle locale.
** 
**        If c is an uppercase letter, tolower() returns its lowercase equivalent,
**        if a lowercase representation exists in the current locale.   Otherwise,
**        it returns c.  The tolower_l() function performs the same task, but uses
**        the locale referred to by the locale handle locale.
** 
**        If  c  is  neither an unsigned char value nor EOF, the behavior of these
**        functions is undefined.
** 
**        The behavior of toupper_l() and tolower_l() is undefined	 if  locale  is
**        the  special locale object LC_GLOBAL_LOCALE (see duplocale(3)) or is not
**        a valid locale object handle.
**
** ============================================================================
** Source: man tolower - Extracted on 2025-11-23
** ============================================================================
*/
