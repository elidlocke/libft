/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:05:56 by enennige          #+#    #+#             */
/*   Updated: 2018/02/28 21:33:10 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memccpy() copies bytes from string src to string dst.  If the character
** c (as converted to an unsigned char) occurs in the string src, the copy
** stops and a pointer to the byte after the copy of c in the string dst
** is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*access_src;
	unsigned char	*edit_dst;
	unsigned char	character;

	i = 0;
	edit_dst = (unsigned char *)dst;
	access_src = (unsigned char *)src;
	character = (unsigned char)c;
	while (i < n)
	{
		*edit_dst = access_src[i];
		edit_dst++;
		if (character == access_src[i])
		{
			return (edit_dst);
		}
		i++;
	}
	return (NULL);
}
