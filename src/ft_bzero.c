/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:26:23 by enennige          #+#    #+#             */
/*   Updated: 2018/02/27 17:01:00 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The bzero() function writes n zeroed bytes (\0) to the string s.  If n
** is zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
	{
		ft_memset(s, '\0', n);
	}
}
