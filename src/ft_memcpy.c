/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:14:06 by enennige          #+#    #+#             */
/*   Updated: 2018/02/28 21:30:58 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memcpy() function copies n bytes from memory area src to memory area
** dst.  If dst and src overlap, behavior is undefined. Returns the original
** value of dst.
*/

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*access_src;
	unsigned char	*edit_dst;

	i = 0;
	access_src = (unsigned char*)src;
	edit_dst = (unsigned char*)dst;
	while (i < n)
	{
		edit_dst[i] = access_src[i];
		i++;
	}
	return (dst);
}
