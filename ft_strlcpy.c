/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                      :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:00:26 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 17:01:41 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        ft_strlcpy - custom implementation for 42 project
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
**        Custom implementation of ft_strlcpy for the 42 School libft project.
**        This is a utility function that is part of the extended libft library.
**
** ============================================================================
** Source: Generated documentation (no manual page available) - 2025-11-23
** ============================================================================
*/
