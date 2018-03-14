/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:40:19 by enennige          #+#    #+#             */
/*   Updated: 2018/03/14 11:02:56 by enennige         ###   ########.fr       */
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
		new = malloc(size);
	if (!size && ptr)
	{
		ft_memdel(ptr);
		return (ptr);
	}
	new = (char *)malloc(size);
	if (!new)
		return (NULL);
	ft_memcpy(new, ptr, size);
	ft_memdel(&ptr);
	ptr = new;
	return (ptr);
}
