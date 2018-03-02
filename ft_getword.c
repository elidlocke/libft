/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:45:40 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 10:48:07 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_getword() function takes a string and a delimiter and returns a
** string with the letters between the start point of the string and the next
** delimiter.
*/

char	*ft_getword(const char *s, char delim)
{
	int		word_length;
	char	*str;

	word_length = 0;
	while (s[word_length] != '\0' && s[word_length] != delim)
	{
		word_length++;
	}
	str = ft_strsub(s, 0, word_length);
	if (str)
	{
		return (str);
	}
	return (NULL);
}
