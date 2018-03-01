/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 09:05:21 by enennige          #+#    #+#             */
/*   Updated: 2018/02/27 17:43:49 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_strnew() allocates with malloc(3) and returns a fresh
** string ending with '\0'. Each character of the string is initialized at
** '\0'. If the allocation fails, the function returns NULL.
*/

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size)
	{
		str = (char *)malloc(sizeof(*str) * (size + 1));
		if (str)
		{
			ft_memset(str, '\0', (size + 1));
			return (str);
		}
	}
	return (NULL);
}
