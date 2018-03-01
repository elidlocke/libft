/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:15:13 by enennige          #+#    #+#             */
/*   Updated: 2018/02/22 11:02:44 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strstr() function locates the first occurrence of the null-terminated
** string needle in the null-terminated string haystack.
*/

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*phaystack;
	int		needle_len;

	phaystack = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
	{
		return (phaystack);
	}
	while (*phaystack)
	{
		if (*phaystack == *needle)
		{
			if (ft_strncmp(needle, phaystack, needle_len) == 0)
			{
				return (phaystack);
			}
		}
		phaystack++;
	}
	return (NULL);
}
