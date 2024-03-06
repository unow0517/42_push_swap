/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:41:12 by yowoo             #+#    #+#             */
/*   Updated: 2024/03/06 12:01:16 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3_b(t_list **stack)
{
	t_list	*node;

	node = *stack;
	if (node->value > node->next->next->value)
		rra(stack);
	else
	{
		// printf("sort3b: %d\n",1);
		rra(stack);
		sa(stack);
	}
}

void	sort_3(t_list **stack)
{
	t_list	*node;

	node = *stack;
	if (node->value > node->next->value)
	{
		if (node->value > node->next->next->value)
		{
			if (node->next->value < node->next->next->value)
				ra(stack);
			else
			{
				ra(stack);
				sa(stack);
			}
		}
		else
			sa(stack);
	}
	else
		sort_3_b(stack);
}

static void	sort_4(t_list **stack_a, t_list **stack_b)
{
	int	smallest_place;

	if (is_sorted(stack_a))
		return ;
	reset_index(stack_a);
	indexing_stack(stack_a);
	// smallest_place = get_idx_place(stack_a, get_nth_smallest(stack_a, 0));
	smallest_place = get_0th_index(stack_a);
	// printf("%d smallest_place4\n",smallest_place);
	// smallest_place = 1;
	// printf("%d from sort_4",get_idx_place(stack_a, 2));
	// printf("%d from sort_4",get_idx_place(stack_a, 2));
	if (smallest_place == 1)
		ra(stack_a);
	else if (smallest_place == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (smallest_place == 3)
	{
		rra(stack_a);
		// printf("%d\n",123123);
	}
	if (is_sorted(stack_a))
		return ;
	// printf("pb: %d\n",pb(stack_a, stack_b));
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_b, stack_a);
}

static void	sort_5(t_list **stack_a, t_list **stack_b)
{
	int	smallest_place;

	// smallest_place = get_idx_place(stack_a, get_nth_smallest(stack_a, 0));
	smallest_place = get_0th_index(stack_a);
	// printf("%d smallest_place5\n",smallest_place);

	if (smallest_place == 1)
		sa(stack_a);
	else if (smallest_place == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (smallest_place == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (smallest_place == 4)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);

	sort_4(stack_a, stack_b);
	pa(stack_b, stack_a);
}

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(stack_a) || ft_lstsize(*stack_a) == 0
		|| ft_lstsize(*stack_a) == 1)
		return ;
	else if (ft_lstsize(*stack_a) == 2)
		sa(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort_3(stack_a);
	else if (ft_lstsize(*stack_a) == 4)
		sort_4(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 5)
		sort_5(stack_a, stack_b);
}
