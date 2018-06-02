/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:38:12 by enennige          #+#    #+#             */
/*   Updated: 2018/06/02 11:40:40 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_sort_bubble() iterates through a list and sorts it by swapping out of
** order elements on each iteration.
** Note: runs in O(n^2) time
*/

void	ft_sort_bubble(int *nums, int len)
{
	int i;
	int j;
	int swap;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (nums[j] > nums[j + 1])
			{
				swap = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}
