/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                    :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:11:18 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 17:52:13 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        ft_lstdelone - custom implementation for 42 project
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
**        Custom implementation of ft_lstdelone for the 42 School libft project.
**        This is a utility function that is part of the extended libft library.
**
** ============================================================================
** Source: Generated documentation (no manual page available) - 2025-11-23
** ============================================================================
*/
