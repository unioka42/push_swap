/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:38:44 by kokada            #+#    #+#             */
/*   Updated: 2023/09/17 23:12:26 by kokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_min_stack(t_stack *stack)
{
	t_stack	*min_stack;
	int		min_value;

	min_stack = NULL;
	min_value = INT32_MAX;
	while (stack)
	{
		if (stack->index == -1 && stack->value < min_value)
		{
			min_value = stack->value;
			min_stack = stack;
		}
		stack = stack->next;
	}
	return (min_stack);
}
