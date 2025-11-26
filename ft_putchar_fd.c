/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                   :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:59:58 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 17:59:52 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        ft_putchar_fd - custom implementation for 42 project
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
**        Custom implementation of ft_putchar_fd for the 42 School libft project.
**        This is a utility function that is part of the extended libft library.
**
** ============================================================================
** Source: Generated documentation (no manual page available) - 2025-11-23
** ============================================================================
*/
