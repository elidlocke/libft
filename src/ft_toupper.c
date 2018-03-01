/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 08:48:23 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 08:51:37 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_toupper() function converts a lower-case letter to the corresponding
** upper-case letter.  The argument must be representable as an unsigned char
** or the value of EOF. If the argument is a lower-case letter, the ft_toupper()
** function returns the corresponding upper-case letter if there is one;
** otherwise, the argument is returned unchanged.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = (c - 'a' + 'A');
	}
	return (c);
}
