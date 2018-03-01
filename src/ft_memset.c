/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:36:35 by enennige          #+#    #+#             */
/*   Updated: 2018/02/27 17:47:11 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

/*
** The ft_memset() function writes len bytes of value c (converted to an
** unsigned char) to the string b. Returns it's first argument.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
