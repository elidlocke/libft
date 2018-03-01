/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 08:26:20 by enennige          #+#    #+#             */
/*   Updated: 2018/02/28 22:01:11 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strrchr() function locates the last occurrence of c (converted to a
** char) in the string pointed to by s.  The terminating null character is
** considered to be part of the string; therefore if c is '\0', the functions
** locate the terminating '\0'. Returns a pointer to the located character,
** or NULL if the character does not appear in the string.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	int		s_len;

	s_len = ft_strlen(s);
	pointer = (char *)s + s_len - 1;
	if (c == '\0')
	{
		pointer++;
		return (pointer);
	}
	while (s_len != 0)
	{
		if (*pointer == c)
		{
			return (pointer);
		}
		s_len--;
		pointer--;
	}
	return (NULL);
}
