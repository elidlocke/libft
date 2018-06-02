/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:18:31 by enennige          #+#    #+#             */
/*   Updated: 2018/06/02 11:42:04 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_sort_insertion() takes each item in the list and iterates through the
** sorted portion of the list to place it in the correct location.
** Note: runtime is O(n^2).
*/

void	ft_sort_insertion(int *nums, int len)
{
	int i;
	int j;
	int value;

	i = 1;
	while (i < len)
	{
		value = nums[i];
		j = i - 1;
		while (j >= 0 && nums[j] > value)
		{
			nums[j + 1] = nums[j];
			j--;
		}
		nums[j + 1] = value;
		i++;
	}
}
