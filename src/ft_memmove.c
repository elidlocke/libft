/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 19:15:04 by enennige          #+#    #+#             */
/*   Updated: 2018/02/28 21:35:49 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memmove() function copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in a non-destructive
** manner. Returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char str[len];

	ft_memcpy(str, src, len);
	ft_memcpy(dst, str, len);
	return (dst);
}
