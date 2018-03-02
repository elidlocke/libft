/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 12:25:11 by enennige          #+#    #+#             */
/*   Updated: 2018/02/28 21:41:46 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memcmp() function compares byte string s1 against byte string s2. Both
** strings are assumed to be n bytes long. Returns 0 if the first two strings
** are identical, otherwise returns the difference between the first two bytes
** (treated as unsigned char values). Zero-length strings are always identical.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_str;
	unsigned char	*s2_str;

	s1_str = (unsigned char *)s1;
	s2_str = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_str[i] != s2_str[i])
		{
			return (s1_str[i] - s2_str[i]);
		}
		i++;
	}
	return (0);
}
