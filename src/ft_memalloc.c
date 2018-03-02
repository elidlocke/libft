/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 17:30:12 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 08:53:31 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates with malloc(3) and returns a fresh memory area. The memory
** allocated is initialized to 0. If the allocation fails, the function
** returns NULL.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void		*ptr;

	if (size)
	{
		ptr = (void *)malloc(sizeof(*ptr) * (size));
		if (ptr)
		{
			ft_memset(ptr, 0, size);
			return (ptr);
		}
	}
	return (NULL);
}
