/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 11:27:10 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 15:56:31 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strncmp() function lexicographically compares the null-terminated
** strings s1 and s2. Returns an integer greater than, equal to, or less than
** 0, according as the string s1 is greater than, equal to, or less than the
** string s2.  Compares not more than n characters. The comparison is done
** using unsigned characters, so that '\200' is greater than '\0'.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
