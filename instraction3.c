/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:39:26 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/09 13:39:27 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	rra(t_data *ptr, int i)
{
	int		tmp;
	int		j;

	tmp = ptr->stack_a[ptr->size_a - 1];
	j = ptr->size_a;
	while (j != 0)
	{
		ptr->stack_a[j] = ptr->stack_a[j - 1];
		j--;
	}
	ptr->stack_a[0] = tmp;
	if (i == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_data *ptr, int i)
{
	int		tmp;
	int		j;

	tmp = ptr->stack_b[ptr->size_b - 1];
	j = ptr->size_b;
	while (j != 0)
	{
		ptr->stack_b[j] = ptr->stack_b[j - 1];
		j--;
	}
	ptr->stack_b[0] = tmp;
	if (i == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_data *ptr)
{
	rra(ptr, 0);
	rrb(ptr, 0);
	write(1, "rrr\n", 4);
}
