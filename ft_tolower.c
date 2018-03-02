/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:50:45 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 08:52:20 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_tolower() function converts an upper-case letter to the correspond-ing
** lower-case letter.  The argument must be representable as an unsigned char
** or the value of EOF.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = (c - 'A' + 'a');
	}
	return (c);
}
