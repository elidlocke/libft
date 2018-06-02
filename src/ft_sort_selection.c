/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:15:01 by enennige          #+#    #+#             */
/*   Updated: 2018/06/02 11:45:27 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
** ft_sort_selection() takes an array of ints, and iterates through the array,
** finding the next biggest number and adding it to the sorted part of the list.
** Note: Runtime is O(n^2)
*/

void		ft_sort_selection(int *nums, int len)
{
	int i;
	int j;
	int smallest;

	i = 0;
	while (i < len)
	{
		smallest = i;
		j = i;
		while (j < len)
		{
			if (nums[j] < nums[smallest])
			{
				smallest = j;
			}
			j++;
		}
		swap(&nums[i], &nums[smallest]);
		i++;
	}
}
