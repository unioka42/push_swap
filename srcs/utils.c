/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokada <kokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:52:32 by kokada            #+#    #+#             */
/*   Updated: 2023/09/10 02:42:46 by kokada           ###   ########.fr       */
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
	while (array[i])
	{
		if (!ft_isdigit(array[i]))
			return (0);
		i++;
	}
	return (1);
}
