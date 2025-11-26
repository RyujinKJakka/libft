/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                       :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:09:14 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 17:21:13 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        ft_lstnew - custom implementation for 42 project
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
**        Custom implementation of ft_lstnew for the 42 School libft project.
**        This is a utility function that is part of the extended libft library.
**
** ============================================================================
** Source: Generated documentation (no manual page available) - 2025-11-23
** ============================================================================
*/
