/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:39:31 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/09 13:39:32 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	check_min(t_data *stack)
{
	int		i;
	int		min;

	min = stack->stack_a[0];
	i = 1;
	while (i < stack->size_a)
	{
		if (min > stack->stack_a[i])
			min = stack->stack_a[i];
		i++;
	}
	return (min);
}

int	min_index(t_data *stack)
{
	int		i;
	int		min;

	min = stack->stack_a[0];
	i = 1;
	while (i < stack->size_a)
	{
		if (min > stack->stack_a[i])
			min = stack->stack_a[i];
		i++;
	}
	return (i);
}
