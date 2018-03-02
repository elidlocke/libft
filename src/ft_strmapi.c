/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:27:44 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 18:51:54 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_strmap() applies the function f to each character of the
** string given as an argument by giving its index as the first argument to
** create a "fresh" new string (with malloc(3)) resulting from the successive
** applications of f.
*/

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
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
				new_str[i] = (*f)(i, s[i]);
				i++;
			}
			new_str[i] = '\0';
			return (new_str);
		}
	}
	return (NULL);
}
