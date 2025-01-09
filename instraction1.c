/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:39:15 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/09 13:39:16 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	pb(t_data *data)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = data->stack_a[0];
	while (++i < data->size_a - 1)
		data->stack_a[i] = data->stack_a[i + 1];
	i = data->size_b;
	while (i)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[0] = tmp;
	data->size_b++;
	data->size_a--;
	write(1, "pb\n", 3);
}

void	pa(t_data *data)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = data->stack_b[0];
	while (++i < data->size_b - 1)
		data->stack_b[i] = data->stack_b[i + 1];
	i = data->size_a;
	while (i)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[0] = tmp;
	data->size_a++;
	data->size_b--;
	write(1, "pa\n", 3);
}
