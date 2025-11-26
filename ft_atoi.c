/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                         :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:05:00 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 14:17:21 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sum;
	int	sign;

	sum = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		sum = (sum * 10) + (*nptr - '0');
		nptr++;
	}
	return (sign * sum);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        atoi, atol, atoll - convert a string to an integer
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <stdlib.h>
** 
**        int atoi(const char *nptr);
**        long atol(const char *nptr);
**        long long atoll(const char *nptr);
** 
**    Feature Test Macro Requirements for glibc (see feature_test_macros(7)):
** 
**        atoll():
** 	   _ISOC99_SOURCE
** 	       || /* glibc <= 2.19: */ _BSD_SOURCE || _SVID_SOURCE
** 
** 
** DESCRIPTION
**        The  atoi()  function converts the initial portion of the string pointed
**        to by nptr to int.  The behavior is the same as
** 
** 	   strtol(nptr, NULL, 10);
** 
**        except that atoi() does not detect errors.
** 
**        The atol() and atoll() functions behave the same as atoi(), except  that
**        they  convert  the initial portion of the string to their return type of
**        long or long long.
** 
** 
** DESCRIPTION
**        The  atoi()  function converts the initial portion of the string pointed
**        to by nptr to int.  The behavior is the same as
** 
** 	   strtol(nptr, NULL, 10);
** 
**        except that atoi() does not detect errors.
** 
**        The atol() and atoll() functions behave the same as atoi(), except  that
**        they  convert  the initial portion of the string to their return type of
**        long or long long.
**
** ============================================================================
** Source: man atoi - Extracted on 2025-11-23
** ============================================================================
*/
