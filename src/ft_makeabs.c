/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makeabs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:22:47 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 10:45:57 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_makeabs() function takes an integer and changes it to it's absolute
** value, while changing the sign variable that gets passed in (1 for positive
** or -1 for negative).
*/

void	ft_makeabs(int *n, int *sign)
{
	if (*n < 0)
	{
		*n = (*n * -1);
		*sign = -1;
	}
	else
	{
		*sign = 1;
	}
}
