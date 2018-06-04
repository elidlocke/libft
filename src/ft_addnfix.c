/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnfix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 09:54:03 by enennige          #+#    #+#             */
/*   Updated: 2018/06/04 16:09:30 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_addnfix() takes a string, and modifiers it in place, adding
** the fix_char either as a prefix (side = 1) or suffix (side = 2)
*/

void	ft_addnfix(char **str, char fix_char, int len, int side)
{
	char	*fix;
	char	*joined;

	joined = NULL;
	if (len && len != -1)
	{
		fix = ft_strnew(len);
		if (!(fix))
			return ;
		ft_memset(fix, fix_char, len);
		if (side == 2)
		{
			joined = ft_strjoin(*str, fix);
		}
		else
		{
			joined = ft_strjoin(fix, *str);
		}
		free(*str);
		free(fix);
		*str = joined;
	}
}
