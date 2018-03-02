/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:10:14 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 21:34:00 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strsub() function allocates with malloc(3) and returns a "fresh"
** substring from string given as an argument. The substring begins at index
** start and is of size len. If start and len aren't referring to a valid
** substring, the behavior is undefined. If the allocation fails, the function
** returns NULL.
*/

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (s)
	{
		substr = ft_strnew(len);
		if (substr)
		{
			i = start;
			j = 0;
			while (j < len)
			{
				substr[j] = s[i];
				i++;
				j++;
			}
			substr[i] = '\0';
			return (substr);
		}
	}
	return (NULL);
}
