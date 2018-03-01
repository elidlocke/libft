/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:39:32 by enennige          #+#    #+#             */
/*   Updated: 2018/02/28 22:08:39 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strcmp() function lexicographically compares the null-terminated
** strings s1 and s2. Returns an integer greater than, equal to, or less than
** 0, according as the string s1 is greater than,equal to, or less than the
** string s2.  The comparison is done using unsigned characters, so that
** '\200' is greater than '\0'.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	s1_letter;
	unsigned char	s2_letter;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	s1_letter = (unsigned char)s1[i];
	s2_letter = (unsigned char)s2[i];
	return (s1_letter - s2_letter);
}
