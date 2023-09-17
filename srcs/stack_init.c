/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:26:49 by kokada            #+#    #+#             */
/*   Updated: 2023/09/17 23:12:38 by kokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stack_add(t_stack **stack, int value)
{
	t_stack	*new_stack;
	t_stack	*i_stack;

	new_stack = (t_stack *)malloc(sizeof(t_stack));
	new_stack->value = value;
	new_stack->index = -1;
	new_stack->next = NULL;
	if (*stack == NULL)
	{
		*stack = new_stack;
	}
	else
	{
		i_stack = *stack;
		while (i_stack->next)
			i_stack = i_stack->next;
		i_stack->next = new_stack;
	}
}

void	set_index_stack(t_stack **stack)
{
	int		i;
	t_stack	*tmp;
	t_stack	*i_stack;

	i_stack = *stack;
	i = 0;
	while (i_stack)
	{
		tmp = find_min_stack(*stack);
		tmp->index = i;
		i_stack = i_stack->next;
		i++;
	}
}

void	stack_init(int argc, char **argv, t_stack **stack)
{
	int	i;
	int	value;

	i = 0;
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		i++;
	while (argv[i] != NULL)
	{
		if (!isdigit_array(argv[i]))
		{
			ft_putendl_fd("err", 1);
			return ;
		}
		value = ft_atoi(argv[i]);
		stack_add(stack, value);
		i++;
	}
	if (argc == 2)
		free_array((void **)argv);
	set_index_stack(stack);
}
