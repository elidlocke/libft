/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 14:52:35 by enennige          #+#    #+#             */
/*   Updated: 2018/06/04 16:10:17 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Read a single line at a time from a file
*/

int ft_readline(const int fd, char **line)
{
    int     ret;
    int     i;
    char    buffer_char;
    char    *buffer_line;

    buffer_line = (char *)malloc(sizeof(1));
    buffer_line[0] = '\0';

    if (read(fd, &buffer_char, 0) < 0 || fd < 0 || line == NULL)
        return (-1);
    i = 0;
    while ((ret = read(fd, &buffer_char, 1)))
    {
        i += 1;
        if (buffer_char == '\n')
        {
            *line = buffer_line;
            return (1);
        }
        ft_addnfix(&buffer_line, buffer_char, 1, 2);
    }
    return (0);
}
