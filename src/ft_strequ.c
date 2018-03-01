/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:55:09 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 10:13:50 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strequ() function does a lexicographical comparison between s1 and
** s2. If the 2 strings are identical the function returns 1, or 0 otherwise.
*/

int	ft_strequ(const char *s1, const char *s2)
{
	if (s1 && s2)
	{
		if (ft_strcmp(s1, s2) == 0)
		{
			return (1);
		}
	}
	return (0);
}
