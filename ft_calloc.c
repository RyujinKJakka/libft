/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                       :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khthiam <khthiam@student.42>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:10:36 by khthiam           #+#    #+#             */
/*   Updated: 2025/10/19 17:19:28 by khthiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*p;

	sum = nmemb * size;
	p = malloc(sum);
	if (!p)
		return (NULL);
	ft_memset(p, 0, sum);
	return (p);
}

/*
** ============================================================================
** MANUAL SECTIONS
** ============================================================================
**
** NAME
**        malloc,	free, calloc, realloc, reallocarray - allocate and free dynamic
**        memory
** 
** 
** LIBRARY
**        Standard C library (libc, -lc)
** 
** 
** SYNOPSIS
**        #include <stdlib.h>
** 
**        void *malloc(size_t size);
**        void free(void *_Nullable ptr);
**        void *calloc(size_t n, size_t size);
**        void *realloc(void *_Nullable ptr, size_t size);
**        void *reallocarray(void *_Nullable ptr, size_t n, size_t size);
** 
**    Feature Test Macro Requirements for glibc (see feature_test_macros(7)):
** 
**        reallocarray():
** 	   Since glibc 2.29:
** 	       _DEFAULT_SOURCE
** 	   glibc 2.28 and earlier:
** 	       _GNU_SOURCE
** 
** 
** DESCRIPTION
**    malloc()
**        The malloc() function allocates size bytes and returns a pointer to  the
**        allocated  memory.   The	 memory is not initialized.  If size is 0, then
**        malloc() returns a unique pointer value that can later  be  successfully
**        passed to free().  (See "Nonportable behavior" for portability issues.)
** 
**    free()
**        The free() function frees the memory space pointed to by ptr, which must
**        have  been returned by a previous call to malloc() or related functions.
**        Otherwise, or if ptr has already been freed, undefined behavior	occurs.
**        If ptr is NULL, no operation is performed.
** 
**    calloc()
**        The  calloc()  function	allocates  memory for an array of n elements of
**        size bytes each and returns a pointer to the allocated memory.  The mem‐
**        ory is set to zero.  If n or size is 0, then calloc() returns  a	 unique
**        pointer value that can later be successfully passed to free().
** 
**        If  the	multiplication	of n and size would result in integer overflow,
**        then calloc() returns an error.	By contrast, an integer overflow  would
**        not  be detected in the following call to malloc(), with the result that
**        an incorrectly sized block of memory would be allocated:
** 
** 	   malloc(n * size);
** 
**    realloc()
**        The realloc() function changes the size of the memory block  pointed  to
**        by  ptr	to size bytes.	The contents of the memory will be unchanged in
**        the range from the start of the region up to the minimum of the old  and
**        new  sizes.  If the new size is larger than the old size, the added mem‐
**        ory will not be initialized.
** 
**        If ptr is NULL, then the call is equivalent  to	malloc(size),  for  all
**        values of size.
** 
**        If  size is equal to zero, and ptr is not NULL, then the call is equiva‐
**        lent to free(ptr) (but see "Nonportable behavior"  for  portability  is‐
**        sues).
** 
**        Unless  ptr  is	NULL,  it must have been returned by an earlier call to
**        malloc or related functions.  If	 the  area  pointed  to	 was  moved,  a
**        free(ptr) is done.
** 
**    reallocarray()
**        The reallocarray() function changes the size of (and possibly moves) the
**        memory block pointed to by ptr to be large enough for an array of n ele‐
**        ments, each of which is size bytes.  It is equivalent to the call
** 
** 	   realloc(ptr, n * size);
** 
**        However,	 unlike that realloc() call, reallocarray() fails safely in the
**        case where the multiplication would overflow.  If such an  overflow  oc‐
**        curs, reallocarray() returns an error.
** 
** 
** DESCRIPTION
**    malloc()
**        The malloc() function allocates size bytes and returns a pointer to  the
**        allocated  memory.   The	 memory is not initialized.  If size is 0, then
**        malloc() returns a unique pointer value that can later  be  successfully
**        passed to free().  (See "Nonportable behavior" for portability issues.)
** 
**    free()
**        The free() function frees the memory space pointed to by ptr, which must
**        have  been returned by a previous call to malloc() or related functions.
**        Otherwise, or if ptr has already been freed, undefined behavior	occurs.
**        If ptr is NULL, no operation is performed.
** 
**    calloc()
**        The  calloc()  function	allocates  memory for an array of n elements of
**        size bytes each and returns a pointer to the allocated memory.  The mem‐
**        ory is set to zero.  If n or size is 0, then calloc() returns  a	 unique
**        pointer value that can later be successfully passed to free().
** 
**        If  the	multiplication	of n and size would result in integer overflow,
**        then calloc() returns an error.	By contrast, an integer overflow  would
**        not  be detected in the following call to malloc(), with the result that
**        an incorrectly sized block of memory would be allocated:
** 
** 	   malloc(n * size);
** 
**    realloc()
**        The realloc() function changes the size of the memory block  pointed  to
**        by  ptr	to size bytes.	The contents of the memory will be unchanged in
**        the range from the start of the region up to the minimum of the old  and
**        new  sizes.  If the new size is larger than the old size, the added mem‐
**        ory will not be initialized.
** 
**        If ptr is NULL, then the call is equivalent  to	malloc(size),  for  all
**        values of size.
** 
**        If  size is equal to zero, and ptr is not NULL, then the call is equiva‐
**        lent to free(ptr) (but see "Nonportable behavior"  for  portability  is‐
**        sues).
** 
**        Unless  ptr  is	NULL,  it must have been returned by an earlier call to
**        malloc or related functions.  If	 the  area  pointed  to	 was  moved,  a
**        free(ptr) is done.
** 
**    reallocarray()
**        The reallocarray() function changes the size of (and possibly moves) the
**        memory block pointed to by ptr to be large enough for an array of n ele‐
**        ments, each of which is size bytes.  It is equivalent to the call
** 
** 	   realloc(ptr, n * size);
** 
**        However,	 unlike that realloc() call, reallocarray() fails safely in the
**        case where the multiplication would overflow.  If such an  overflow  oc‐
**        curs, reallocarray() returns an error.
**
** ============================================================================
** Source: man calloc - Extracted on 2025-11-23
** ============================================================================
*/
