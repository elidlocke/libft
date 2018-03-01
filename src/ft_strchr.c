/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 21:06:30 by enennige          #+#    #+#             */
/*   Updated: 2018/02/28 22:00:00 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strchr() function locates the first occurrence of c (converted to a
** char) in the string pointed to by s.  The terminating null character is
** considered to be part of the string; therefore if c is '\0', the functions
** locate the terminating '\0'. Returns a pointer to the located character,
** or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *pointer;

	pointer = (char *)s;
	while (*pointer)
	{
		if (*pointer == c)
		{
			return (pointer);
		}
		pointer++;
	}
	if (*pointer == '\0' && c == '\0')
	{
		return (pointer);
	}
	return (NULL);
}
