/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:19:16 by kokada            #+#    #+#             */
/*   Updated: 2023/09/18 15:33:47 by kokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	int	tmp_val;
	int	tmp_index;

	tmp_val = (*stack)->value;
	tmp_index = (*stack)->index;
	(*stack)->value = (*stack)->next->value;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->value = tmp_val;
	(*stack)->next->index = tmp_index;
}

void	rotate(t_stack **stack)
{
	t_stack	*tmp;

	tmp = stack_last(*stack);
	tmp->next = *stack;
	*stack = (*stack)->next;
	tmp->next->next = NULL;
}

void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*i_stack;
	t_stack	*last_stack;

	i_stack = *stack;
	while (i_stack->next->next)
		i_stack = i_stack->next;
	last_stack = i_stack->next;
	last_stack->next = *stack;
	*stack = last_stack;
	i_stack->next = NULL;
}

void	push(t_stack **stack_from, t_stack **stack_to)
{
	t_stack	*tmp;

	tmp = *stack_from;
	*stack_from = (*stack_from)->next;
	if (*stack_to)
	{
		tmp->next = *stack_to;
		*stack_to = tmp;
	}
	else
	{
		tmp->next = NULL;
		*stack_to = tmp;
	}
}

void	s_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_b == NULL)
	{
		swap(stack_a);
		ft_putendl_fd("sa", 1);
	}
	else if (stack_a == NULL)
	{
		swap(stack_b);
		ft_putendl_fd("sb", 1);
	}
	else
	{
		swap(stack_a);
		swap(stack_b);
		ft_putendl_fd("ss", 1);
	}
}

void	r_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_b == NULL)
	{
		rotate(stack_a);
		ft_putendl_fd("ra", 1);
	}
	else if (stack_a == NULL)
	{
		rotate(stack_b);
		ft_putendl_fd("rb", 1);
	}
	else
	{
		rotate(stack_a);
		rotate(stack_b);
		ft_putendl_fd("rr", 1);
	}
}

void	rr_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_b == NULL)
	{
		reverse_rotate(stack_a);
		ft_putendl_fd("rra", 1);
	}
	else if (stack_a == NULL)
	{
		reverse_rotate(stack_b);
		ft_putendl_fd("rrb", 1);
	}
	else
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		ft_putendl_fd("rrr", 1);
	}
}

void	p_swap(t_stack **stack_a, t_stack **stack_b, int is_a)
{
	if (is_a)
	{
		push(stack_b, stack_a);
		ft_putendl_fd("pa", 1);
	}
	else
	{
		push(stack_a, stack_b);
		ft_putendl_fd("pb", 1);
	}
}
