/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:39:10 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/09 13:39:11 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	sa(t_data *ptr, int i)
{
	int		tmp;

	tmp = ptr->stack_a[0];
	ptr->stack_a[0] = ptr->stack_a[1];
	ptr->stack_a[1] = tmp;
	if (i == 1)
		write(1, "sa\n", 3);
}

void	sb(t_data *ptr, int i)
{
	int		tmp;

	if (ptr->size_b != 0)
	{
		tmp = ptr->stack_b[0];
		ptr->stack_b[0] = ptr->stack_b[1];
		ptr->stack_b[1] = tmp;
	}
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ss(t_data *ptr)
{
	sa(ptr, 0);
	sb(ptr, 0);
	write (1, "ss\n", 3);
}
