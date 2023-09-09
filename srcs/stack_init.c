/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:26:49 by kokada            #+#    #+#             */
/*   Updated: 2023/09/10 02:40:01 by kokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stack_add(t_stack **stack, int value)
{
	t_stack	*new_stack;
	t_stack	*i_stack;

	new_stack = (t_stack *)malloc(sizeof(t_stack));
	new_stack->value = value;
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
			ft_putstr_fd("err\n", 1);
			return ;
		}
		value = ft_atoi(argv[i]);
		stack_add(stack, value);
		i++;
	}
	if (argc == 2)
		free_array((void **)argv);
}
