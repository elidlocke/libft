/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 11:14:28 by enennige          #+#    #+#             */
/*   Updated: 2018/03/17 10:25:26 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strdup() function allocates sufficient memory to copy n bytes of the
** string s1, does the copy, and returns a pointer to it. s1 will always be NUL
** terminated. The pointer may subsequently be used as an argument to the
** function free(3). If insufficient memory is available, NULL is returned.
*/

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char		*str_copy;
	size_t		i;

	str_copy = malloc(sizeof(*str_copy) * (n + 1));
	if (!str_copy)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		str_copy[i] = s1[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}
