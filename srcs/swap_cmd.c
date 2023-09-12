/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:19:16 by kokada            #+#    #+#             */
/*   Updated: 2023/09/12 15:38:49 by kokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	int	tmp;

	tmp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = tmp;
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

void	p_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_b == NULL)
	{
		ft_putendl_fd("pa", 1);
	}
	else
	{
		ft_putendl_fd("pb", 1);
	}
}
