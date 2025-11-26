/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                         :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:05:06 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 15:15:06 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_decimal_places(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*mount_str(char *str, long l, int i)
{
	if (l == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (l < 0)
	{
		str[0] = '-';
		l *= -1;
	}
	while (l > 0)
	{
		str[i--] = l % 10 + '0';
		l /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long		l;

	l = n;
	i = ft_decimal_places(l);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if ((!str))
		return (NULL);
	str[i--] = '\0';
	return (mount_str(str, l, i));
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        ft_itoa - custom implementation for 42 project
** 
** LIBRARY
**        libft (custom C library)
** 
** SYNOPSIS
**        #include "libft.h"
** 
**        (See function prototype in libft.h)
** 
** DESCRIPTION
**        Custom implementation of ft_itoa for the 42 School libft project.
**        This is a utility function that is part of the extended libft library.
**
** ============================================================================
** Source: Generated documentation (no manual page available) - 2025-11-23
** ============================================================================
*/
