/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:08:52 by yowoo             #+#    #+#             */
/*   Updated: 2024/03/04 14:56:45 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int val)
{
	t_list	*first_node;

	first_node = (t_list *)malloc(sizeof(t_list));
	if (!(first_node))
		return (0);
	first_node->value = val;
	first_node->index = -1;
	first_node->next = 0;
	return (first_node);
}