/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcre.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 13:33:09 by enennige          #+#    #+#             */
/*   Updated: 2018/03/09 15:24:14 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function ft_strcre() loops through a string and replaces all instances
** of ch1 with ch2.
*/

void	ft_strcre(char *str, char ch1, char ch2)
{
	unsigned char *ptr;

	ptr = (unsigned char *)str;
	while (*ptr)
	{
		if (*ptr == ch1)
			*ptr = ch2;
		ptr++;
	}
	if (*ptr == ch1)
		*ptr = ch2;
}
