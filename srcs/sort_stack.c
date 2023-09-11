/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:56:23 by kokada            #+#    #+#             */
/*   Updated: 2023/09/11 23:56:58 by kokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack_a)
{
	if ((*stack_a)->value == get_stack_min(stack_a))
	{
		if ((*stack_a)->next->value == get_stack_max(stack_a))
		{
			rr_swap(stack_a, NULL);
			s_swap(stack_a, NULL);
		}
	}
	else if ((*stack_a)->value != get_stack_max(stack_a))
	{
		if ((*stack_a)->next->value == get_stack_min(stack_a))
			s_swap(stack_a, NULL);
		else
			rr_swap(stack_a, NULL);
	}
	else
	{
		if ((*stack_a)->next->value == get_stack_min(stack_a))
			r_swap(stack_a, NULL);
		else
		{
			r_swap(stack_a, NULL);
			s_swap(stack_a, NULL);
		}
	}
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = get_stack_size(*stack_a);
	if (size == 1)
		return ;
	if (size == 2)
		s_swap(stack_a, NULL);
	else if (size == 3)
		sort_three(stack_a);
}
