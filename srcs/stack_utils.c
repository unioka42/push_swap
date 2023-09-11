/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 03:11:48 by kokada            #+#    #+#             */
/*   Updated: 2023/09/11 16:43:54 by kokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_stack **stack)
{
	t_stack	*i_stack;

	i_stack = *stack;
	while (i_stack->next)
	{
		if (i_stack->value > i_stack->next->value)
			return (0);
		i_stack = i_stack->next;
	}
	return (1);
}

int	get_stack_min(t_stack **stack)
{
	int		min;
	t_stack	*i_stack;

	i_stack = *stack;
	min = i_stack->value;
	while (i_stack->next)
	{
		i_stack = i_stack->next;
		if (i_stack->value < min)
			min = i_stack->value;
	}
	return (min);
}

int	get_stack_max(t_stack **stack)
{
	int		max;
	t_stack	*i_stack;

	i_stack = *stack;
	max = i_stack->value;
	while (i_stack->next)
	{
		i_stack = i_stack->next;
		if (i_stack->value > max)
			max = i_stack->value;
	}
	return (max);
}
