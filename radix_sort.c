/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:05:18 by yowoo             #+#    #+#             */
/*   Updated: 2024/03/06 12:53:55 by yowoo            ###   ########.fr       */
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
	while (head) //get max index
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	max_bit = 0;
	while ((max >> max_bit) != 0)
	{
		printf("shift: %d\n", max >> max_bit);
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
	printf("MAXBIT: %d\n",max_bit);
	printf("SIZE IN RADIX SORT: %d\n",size);
	printf("LOGIC: %d\n",(5 >> 1) & 1);

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