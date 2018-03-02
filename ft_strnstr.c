/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:15:13 by enennige          #+#    #+#             */
/*   Updated: 2018/02/28 22:04:54 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strnstr() function locates the first occurrence of the null
** -terminated string needle in the null-terminated string haystack, where not
** more than len characters are searched. Characters after the '\0' are not
** searched. If needle is an empty string, haystack is returned; if needle
** occurs nowhere in haystack, NULL is returned; otherwise a pointer to the
** first character of the first occurrence of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*phaystack;
	size_t	letters_left;
	size_t	needle_len;
	size_t	i;

	phaystack = (char *)haystack;
	if (needle[0] == '\0')
		return (phaystack);
	i = 0;
	letters_left = len;
	needle_len = (size_t)ft_strlen(needle);
	while (*phaystack && letters_left >= needle_len)
	{
		if (*phaystack == *needle)
		{
			if (ft_strncmp(needle, phaystack, needle_len) == 0)
				return (phaystack);
		}
		i++;
		letters_left--;
		phaystack++;
	}
	return (NULL);
}
