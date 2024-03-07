/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:05:18 by yowoo             #+#    #+#             */
/*   Updated: 2024/03/07 11:00:03 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// >> -> bit shift in binary
static int	get_binary_maxbit_of_biggest(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bit;

	head = *stack;
	max = head->index;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	max_bit = 0;
	while ((max >> max_bit) != 0)
	{
		max_bit++;
	}
	return (max_bit - 1);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	int		bit;
	int		j;
	int		size;
	int		max_bit;

	bit = 0;
	head_a = *stack_a;
	size = ft_lstsize(head_a);
	max_bit = get_binary_maxbit_of_biggest(stack_a);
	while (bit <= max_bit)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stack_a;
			if (((head_a->index >> bit) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_b, stack_a);
		bit++;
	}
}