/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:19:16 by kokada            #+#    #+#             */
/*   Updated: 2023/09/11 14:18:24 by kokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_b == NULL)
	{
		ft_putendl_fd("sa", 1);
	}
	else if (stack_a == NULL)
	{
		ft_putendl_fd("sb", 1);
	}
	else
	{
		ft_putendl_fd("ss", 1);
	}
}

void	r_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_b == NULL)
	{
		ft_putendl_fd("ra", 1);
	}
	else if (stack_a == NULL)
	{
		ft_putendl_fd("rb", 1);
	}
	else
	{
		ft_putendl_fd("rr", 1);
	}
}

void	rr_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_b == NULL)
	{
		ft_putendl_fd("rra", 1);
	}
	else if (stack_a == NULL)
	{
		ft_putendl_fd("rrb", 1);
	}
	else
	{
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
