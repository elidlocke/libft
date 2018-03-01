/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:04:51 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 10:23:32 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strnequ() function does a lexicographical comparison between s1 and
** s2. If the 2 strings are identical the function returns 1, or 0 otherwise.
*/

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2)
	{
		if (ft_strncmp(s1, s2, n) == 0)
		{
			return (1);
		}
	}
	return (0);
}
