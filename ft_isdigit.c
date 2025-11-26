/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                      :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:08:53 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 17:42:51 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        isalnum,	 isalpha, isascii, isblank, iscntrl, isdigit, isgraph, islower,
**        isprint, ispunct,  isspace,  isupper,  isxdigit,	 isalnum_l,  isalpha_l,
**        isascii_l,  isblank_l,  iscntrl_l,  isdigit_l, isgraph_l, islower_l, is‐
**        print_l, ispunct_l, isspace_l, isupper_l, isxdigit_l - character classi‐
**        fication functions
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <ctype.h>
** 
**        int isalnum(int c);
**        int isalpha(int c);
**        int iscntrl(int c);
**        int isdigit(int c);
**        int isgraph(int c);
**        int islower(int c);
**        int isprint(int c);
**        int ispunct(int c);
**        int isspace(int c);
**        int isupper(int c);
**        int isxdigit(int c);
** 
**        int isascii(int c);
**        int isblank(int c);
** 
**        int isalnum_l(int c, locale_t locale);
**        int isalpha_l(int c, locale_t locale);
**        int isblank_l(int c, locale_t locale);
**        int iscntrl_l(int c, locale_t locale);
**        int isdigit_l(int c, locale_t locale);
**        int isgraph_l(int c, locale_t locale);
**        int islower_l(int c, locale_t locale);
**        int isprint_l(int c, locale_t locale);
**        int ispunct_l(int c, locale_t locale);
**        int isspace_l(int c, locale_t locale);
**        int isupper_l(int c, locale_t locale);
**        int isxdigit_l(int c, locale_t locale);
** 
**        int isascii_l(int c, locale_t locale);
** 
**    Feature Test Macro Requirements for glibc (see feature_test_macros(7)):
** 
**        isascii():
** 	   _XOPEN_SOURCE
** 	       || /* glibc >= 2.19: */ _DEFAULT_SOURCE
** 	       || /* glibc <= 2.19: */ _SVID_SOURCE
** 
**        isblank():
** 	   _ISOC99_SOURCE || _POSIX_C_SOURCE >= 200112L
** 
**        isalnum_l(), isalpha_l(), isblank_l(), iscntrl_l(), isdigit_l(),
**        isgraph_l(), islower_l(), isprint_l(), ispunct_l(), isspace_l(),
**        isupper_l(), isxdigit_l():
** 	   Since glibc 2.10:
** 	       _XOPEN_SOURCE >= 700
** 	   Before glibc 2.10:
** 	       _GNU_SOURCE
** 
**        isascii_l():
** 	   Since glibc 2.10:
** 	       _XOPEN_SOURCE >= 700 && (_SVID_SOURCE || _BSD_SOURCE)
** 	   Before glibc 2.10:
** 	       _GNU_SOURCE
** 
** 
** DESCRIPTION
**        These functions check whether c, which must have the  value  of	an  un‐
**        signed  char  or	 EOF, falls into a certain character class according to
**        the specified locale.  The functions without the "_l" suffix perform the
**        check based on the current locale.
** 
**        The functions with the "_l" suffix perform the check based on the locale
**        specified by the locale object locale.  The behavior of these  functions
**        is  undefined  if  locale  is the special locale object LC_GLOBAL_LOCALE
**        (see duplocale(3)) or is not a valid locale object handle.
** 
**        The list below explains the operation of the functions without the  "_l"
**        suffix;	the functions with the "_l" suffix differ only in using the lo‐
**        cale object locale instead of the current locale.
** 
**        isalnum()
** 	      checks for an alphanumeric character; it is equivalent to	 (isal‐
** 	      pha(c) || isdigit(c)).
** 
**        isalpha()
** 	      checks  for  an alphabetic character; in the standard "C" locale,
** 	      it is equivalent to (isupper(c) || islower(c)).  In some locales,
** 	      there may be additional characters for which isalpha()  is  true—
** 	      letters which are neither uppercase nor lowercase.
** 
**        isascii()
** 	      checks  whether  c  is a 7-bit unsigned char value that fits into
** 	      the ASCII character set.
** 
**        isblank()
** 	      checks for a blank character; that is, a space or a tab.
** 
**        iscntrl()
** 	      checks for a control character.
** 
**        isdigit()
** 	      checks for a digit (0 through 9).
** 
**        isgraph()
** 	      checks for any printable character except space.
** 
**        islower()
** 	      checks for a lowercase character.
** 
**        isprint()
** 	      checks for any printable character including space.
** 
**        ispunct()
** 	      checks for any printable character which is not a space or an al‐
** 	      phanumeric character.
** 
**        isspace()
** 	      checks for white-space characters.  In the "C"  and  "POSIX"  lo‐
** 	      cales,  these  are: space, form-feed ('\f'), newline ('\n'), car‐
** 	      riage return ('\r'), horizontal  tab  ('\t'),  and  vertical  tab
** 	      ('\v').
** 
**        isupper()
** 	      checks for an uppercase letter.
** 
**        isxdigit()
** 	      checks for hexadecimal digits, that is, one of
** 	      0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F.
** 
** 
** DESCRIPTION
**        These functions check whether c, which must have the  value  of	an  un‐
**        signed  char  or	 EOF, falls into a certain character class according to
**        the specified locale.  The functions without the "_l" suffix perform the
**        check based on the current locale.
** 
**        The functions with the "_l" suffix perform the check based on the locale
**        specified by the locale object locale.  The behavior of these  functions
**        is  undefined  if  locale  is the special locale object LC_GLOBAL_LOCALE
**        (see duplocale(3)) or is not a valid locale object handle.
** 
**        The list below explains the operation of the functions without the  "_l"
**        suffix;	the functions with the "_l" suffix differ only in using the lo‐
**        cale object locale instead of the current locale.
** 
**        isalnum()
** 	      checks for an alphanumeric character; it is equivalent to	 (isal‐
** 	      pha(c) || isdigit(c)).
** 
**        isalpha()
** 	      checks  for  an alphabetic character; in the standard "C" locale,
** 	      it is equivalent to (isupper(c) || islower(c)).  In some locales,
** 	      there may be additional characters for which isalpha()  is  true—
** 	      letters which are neither uppercase nor lowercase.
** 
**        isascii()
** 	      checks  whether  c  is a 7-bit unsigned char value that fits into
** 	      the ASCII character set.
** 
**        isblank()
** 	      checks for a blank character; that is, a space or a tab.
** 
**        iscntrl()
** 	      checks for a control character.
** 
**        isdigit()
** 	      checks for a digit (0 through 9).
** 
**        isgraph()
** 	      checks for any printable character except space.
** 
**        islower()
** 	      checks for a lowercase character.
** 
**        isprint()
** 	      checks for any printable character including space.
** 
**        ispunct()
** 	      checks for any printable character which is not a space or an al‐
** 	      phanumeric character.
** 
**        isspace()
** 	      checks for white-space characters.  In the "C"  and  "POSIX"  lo‐
** 	      cales,  these  are: space, form-feed ('\f'), newline ('\n'), car‐
** 	      riage return ('\r'), horizontal  tab  ('\t'),  and  vertical  tab
** 	      ('\v').
** 
**        isupper()
** 	      checks for an uppercase letter.
** 
**        isxdigit()
** 	      checks for hexadecimal digits, that is, one of
** 	      0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F.
**
** ============================================================================
** Source: man isdigit - Extracted on 2025-11-23
** ============================================================================
*/
