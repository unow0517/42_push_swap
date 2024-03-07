/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:58:33 by yowoo             #+#    #+#             */
/*   Updated: 2024/03/07 10:59:22 by yowoo            ###   ########.fr       */
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
	return (place);
}
