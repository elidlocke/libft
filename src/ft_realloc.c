/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:40:19 by enennige          #+#    #+#             */
/*   Updated: 2018/03/14 09:58:10 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_realloc() function creates a new string of the size passed in and
** copies the old data into the new string
*/

char	*ft_realloc(void *ptr, size_t size)
{
	char *new;

	if (!ptr)
		return (NULL);
	if (!size && ptr)
	{
		if (!(new = (char *)malloc(1)))
			return (NULL);
		ft_memdel(&ptr);
		return (new);
	}
	new = (char *)malloc(sizeof(size));
	if (!new)
		return (NULL);
	ft_memcpy(new, ptr, size);
	free(ptr);
	return (new);
}
