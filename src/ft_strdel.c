/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 09:21:27 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 08:56:32 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strdel() function takes as a parameter the address of a string that
** needs to be freed with free(3), then sets its pointer to NULL.
*/

void	ft_strdel(char **as)
{
	if (as)
	{
		if (*as != NULL)
		{
			free(*as);
			*as = NULL;
		}
	}
}
