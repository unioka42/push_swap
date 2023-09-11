/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:05:26 by kokada            #+#    #+#             */
/*   Updated: 2023/09/11 22:05:09 by kokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include <stdio.h>

typedef struct s_stack	t_stack;

typedef struct s_stack
{
	int					value;
	int					index;
	t_stack				*next;
}						t_stack;

void					stack_init(int argc, char **argv, t_stack **stack);
// utils.c
void					free_array(void **ptr);
int						isdigit_array(char *array);
// stack_utils.c
int						is_sort(t_stack **stack);
int						get_stack_min(t_stack **stack);
int						get_stack_max(t_stack **stack);
int						get_stack_size(t_stack *stack);
// swap_cmd.c
void					s_swap(t_stack **stack_a, t_stack **stack_b);
void					r_swap(t_stack **stack_a, t_stack **stack_b);
void					rr_swap(t_stack **stack_a, t_stack **stack_b);
void					p_swap(t_stack **stack_a, t_stack **stack_b);