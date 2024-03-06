/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:54:43 by yowoo             #+#    #+#             */
/*   Updated: 2024/03/06 17:37:38 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include "../libft/libft.h"


typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

//SUBFUNCTIONS
void	ft_error(char *str);
void	ft_free(char **array);
int		is_sorted(t_list **stack);
int		get_idx_place(t_list **stack, int idx);
void	free_stack(t_list **stack);

//FT_ARGS_VERIFY
void	ft_args_verify(int argc, char **argv);

//INDEXING
void	indexing_stack(t_list **stack);
int		get_nth_smallest(t_list **stack, int n);
int		get_0th_index(t_list **stack);
void	reset_index(t_list **stack);

//SIMPLE_SORT
void	simple_sort(t_list **stack_a, t_list **stack_b);

//RADIX SORT
void	radix_sort(t_list **stack_a, t_list **stack_b);

//SUBFNCTIONS WITH LISTS
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int val);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);

//PUSHES
int		push(t_list **stack_from, t_list **stack_to);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);

//SWAPS
int		swap(t_list	**stack);
int		sa(t_list **stack);
int		sb(t_list **stack);
int		ss(t_list **stack_a, t_list **stack_b);

//ROTATES
int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);

//REVERSE ROTATES
int		rvsrotate(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

#endif