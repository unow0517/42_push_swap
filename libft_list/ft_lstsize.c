/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:46:48 by yowoo             #+#    #+#             */
/*   Updated: 2024/03/05 10:22:26 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	*current;

	if (!lst)
		return (0);
	cnt = 0;
	current = lst;
	while (current->next != 0)
	{
		cnt++;

		current = current->next;
	}
	return (cnt + 1);
}
