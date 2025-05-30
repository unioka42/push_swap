/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:52:32 by kokada            #+#    #+#             */
/*   Updated: 2023/09/11 14:56:06 by kokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_array(void **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
}

int	isdigit_array(char *array)
{
	int	i;

	i = 0;
	if (array[0] == '-' && ft_isdigit(array[1]))
		i += 2;
	while (array[i])
	{
		if (!ft_isdigit(array[i]))
			return (0);
		i++;
	}
	return (1);
}
