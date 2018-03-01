/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:46:53 by enennige          #+#    #+#             */
/*   Updated: 2018/02/28 21:49:59 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strcat() function appends a copy of the null-terminated string s2 to
** the end of the null-terminated string s1, then add a terminating '\0'.
** The string s1 must have sufficient space to hold the result.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
