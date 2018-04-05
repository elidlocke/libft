/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 15:06:46 by enennige          #+#    #+#             */
/*   Updated: 2018/04/05 11:26:39 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** num_chars() returns the number of digits in the int that is passed in,
** as well as a space for a sign (if the number is negative).
*/

static	int		num_chars(int n)
{
	int i;
	int sign;

	sign = -1;
	i = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		n = n * -1;
		sign = 1;
	}
	while (n < 0)
	{
		n = n / 10;
		i++;
	}
	if (sign == -1)
		return (i + 1);
	else
		return (i);
}

/*
** the is_edge_case() function checks for both 0 and min int conditions,
** returning whether a number is an edge case, if true, writes the value
** into the input string.
*/

static	int		is_edge_case(int n, void *str)
{
	char	*pstr;
	int		x;
	char	*fstr;

	pstr = (char *)str;
	if (n == -2147483648)
	{
		x = 0;
		fstr = "-2147483648";
		while (x <= 12)
		{
			pstr[x] = fstr[x];
			x++;
		}
		return (1);
	}
	else if (n == 0)
	{
		pstr[0] = '0';
		pstr[1] = '\0';
		return (1);
	}
	return (0);
}

/*
** The ft_itoa() fuction allocates (with malloc(3)) and returns a "fresh"
** string ending with '\0' representing the integer n given as argument.
** Negative numbers must be supported. If the allocation fails, the
** function returns NULL
*/

char			*ft_itoabase(int n, int base)
{
	int		sign;
	char	*str;
	char	*basechars;
	int		i;

	basechars = "0123456789abcdef";
	if ((str = malloc(sizeof(*str) * (num_chars(n) + 1))))
	{
		if (is_edge_case(n, str) == 1)
			return (str);
		ft_makeabs(&n, &sign);
		i = 0;
		while (n > 0)
		{
			str[i] = basechars[n % base];
			n = n / base;
			i++;
		}
		if (sign == -1)
		{
			str[i] = '-';
			i++;
		}
		str[i] = '\0';
		return (ft_strrev(str, ft_strlen(str)));
	}
	return (NULL);
}
