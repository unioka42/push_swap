/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 03:11:48 by kokada            #+#    #+#             */
/*   Updated: 2023/09/10 04:22:32 by kokada           ###   ########.fr       */
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
