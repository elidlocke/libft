/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:21:18 by enennige          #+#    #+#             */
/*   Updated: 2018/02/27 17:18:13 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it.  The pointer may subsequently
** be used as an argument to the function free(3). If insufficient memory is
** available, NULL is returned and errno is set to ENOMEM.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	char	*str_copy;
	int		i;

	s1_len = ft_strlen(s1);
	str_copy = malloc(sizeof(*str_copy) * (s1_len + 1));
	if (str_copy)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			str_copy[i] = s1[i];
			i++;
		}
		str_copy[i] = '\0';
	}
	return (str_copy);
}
