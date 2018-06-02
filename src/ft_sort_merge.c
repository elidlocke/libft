/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:43:40 by enennige          #+#    #+#             */
/*   Updated: 2018/06/02 11:48:41 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	merge(int *nums, int start, int mid, int end)
{
	int i_copy;
	int i_left;
	int i_right;
	int copy[end - start + 1];

	i_copy = 0;
	i_left = start;
	i_right = mid + 1;
	while (i_left <= mid && i_right <= end)
	{
		if (nums[i_left] < nums[i_right])
			copy[i_copy++] = nums[i_left++];
		else
			copy[i_copy++] = nums[i_right++];
	}
	while (i_left <= mid)
		copy[i_copy++] = nums[i_left++];
	while (i_right <= end)
		copy[i_copy++] = nums[i_right++];
	i_copy = 0;
	while (i_copy < (end - start + 1))
	{
		nums[start + i_copy] = copy[i_copy];
		i_copy++;
	}
}

static void	merge_sort_recursion(int *nums, int start, int end)
{
	int mid;

	if (start == end)
		return ;
	mid = (start + end) / 2;
	merge_sort_recursion(nums, start, mid);
	merge_sort_recursion(nums, mid + 1, end);
	merge(nums, start, mid, end);
}

/*
** ft_sort_merge() takes a list of integers and the length of the array and
** then sorts the numbers recursively in nlog(n) time
*/

void		ft_sort_merge(int *nums, int len)
{
	merge_sort_recursion(nums, 0, len - 1);
}
