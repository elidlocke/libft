/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:31:14 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 18:51:39 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_strmap() applies the function f to each character of the
** string given as an argument to create a "fresh" new string (with malloc(3))
** resulting from the successive applications of f.
*/

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*new_str;
	int		i;

	if (s && f)
	{
		new_str = (char *)malloc(sizeof(*new_str) * (ft_strlen(s) + 1));
		if (new_str)
		{
			i = 0;
			while (s[i] != '\0')
			{
				new_str[i] = (*f)(s[i]);
				i++;
			}
			new_str[i] = '\0';
			return (new_str);
		}
	}
	return (NULL);
}
