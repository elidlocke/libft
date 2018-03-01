/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:29:35 by enennige          #+#    #+#             */
/*   Updated: 2018/02/28 21:58:51 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strlcat() appends string src to the end of dst.  It will append at most
** maxlen - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
** maxlen is 0 or the original dst string was longer than maxlen. maxlen
** should be the size of the destination string buffer dst plus the space
** for the nul-terminator. Returns the total length of the string it tried
** to create.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen)
{
	size_t srclen;
	size_t dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen > maxlen)
	{
		dstlen = maxlen;
	}
	if (dstlen == maxlen || maxlen == 0)
	{
		return (dstlen + srclen);
	}
	if (srclen < maxlen - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		ft_memcpy(dst + dstlen, src, maxlen - dstlen - 1);
		dst[maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
}
