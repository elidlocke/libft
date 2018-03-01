/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:12:21 by enennige          #+#    #+#             */
/*   Updated: 2018/02/28 21:56:52 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strncat() function appends a copy of the null-terminated string s2
** to the end of the null-terminated string s1. The ft_strncat() function
** appends not more than n characters from s2, and then adds a terminating
** '\0'.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && j < (int)n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
