/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:58:33 by yowoo             #+#    #+#             */
/*   Updated: 2024/03/06 11:46:32 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*find_next_min(t_list **stack)
{
	t_list	*node;
	t_list	*min;
	int		has_min;

	node = *stack;
	min = NULL;
	has_min = 0;
	while (node)
	{
		if ((!has_min || node->value < min->value) && (node->index == -1))
		{
			min = node;
			has_min = 1;
		}
		node = node->next;
	}
	return (min);
}

void	reset_index(t_list **stack)
{
	t_list	*node;

	node = *stack;
	while (node)
	{
		if (node->index != -1)
			node->index = -1;
		node = node->next;
	}
}

void	indexing_stack(t_list **stack)
{
	t_list	*node;
	int		index;

	index = 0;
	node = find_next_min(stack);
	while (node)
	{
		node->index = index++;
		node = find_next_min(stack);
	}
}

// int	get_nth_smallest(t_list **stack, int n)
// {
// 	t_list	*node;
// 	int		min_idx;

// 	node = *stack;
// 	min_idx = node->index;
// 	while (node)
// 	{
// 		node = node->next;
// 		if ((node->index < min_idx) && node->index != n - 1)
// 			min_idx = node->index;
// 	}
// 	return (min_idx);
// }

int	get_0th_index(t_list **stack)
{
	t_list	*node;
	int		place;

	place = 0;
	node = *stack;
	while (node && node->next)
	{
		if (node->index == 0)
			break ;
		place++;
		node = node->next;
	}
	// printf("get_min_place: %d ",place);
	return (place);
}
