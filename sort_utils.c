/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:39:57 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/09 13:39:58 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	*swap(int *a, int *b)
{
	int		swap;

	swap = *a;
	*a = *b;
	*b = swap;
	return (0);
}

int	get_max_index(t_data *stack, int max)
{
	int		i;

	i = 0;
	while (i < stack->size_b)
	{
		if (stack->stack_b[i] == max)
			return (i);
		i++;
	}
	return (-1);
}

int	check_max(t_data *str)
{
	int		i;
	int		max;

	max = str->stack_b[0];
	i = 0;
	while (i < str->size_b)
	{
		if (max < str->stack_b[i])
		{
			max = str->stack_b[i];
		}
		i++;
	}
	return (max);
}

void	ft_copy(t_data *stack)
{
	int		i;

	i = 0;
	while (i <= stack->size_a - 1)
	{
		stack->fake[i] = stack->stack_a[i];
		i++;
	}
}

int	where_to_push(t_data *stack, int p1, int p2, int counter)
{
	if (stack->stack_a[0] <= stack->fake[p2])
	{
		pb(stack);
		if (stack->size_b >= 2)
			rb(stack, 1);
		counter ++;
	}
	else if (stack->stack_a[0] <= stack->fake[p1])
	{
		pb(stack);
		counter ++;
	}
	else
		ra(stack, 1);
	return (counter);
}
