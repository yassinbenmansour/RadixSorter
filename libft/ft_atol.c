/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:18:58 by yabenman          #+#    #+#             */
/*   Updated: 2025/02/12 14:57:07 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_atol(const char *n, t_stacks *s)
{
	int			i;
	long		sign;
	long	res;
	res = 0;
	sign = 1;
	i = 0;
	while (n[i] == 32 || (n[i] >= 9 && n[i] <= 13))
		i++;
	if ((n[i] == '+' || n[i] == '-'))
	{
		if (n[i] == '-')
			sign = -1;
		i++;
	}
	while (n[i])
	{
		if (!(n[i] >= '0' && n[i] <= '9'))
		{
			write(1, "h\n", 2);
			free_and_exit_with_message(s, "Error\n");
		}
		res = res * 10 + (n[i++] - '0');
		if ((res * sign) > 2147483647 || (res * sign) < -2147483648)
		{
			free_and_exit_with_message(s, "Error\n");
		}
	}
	
	
	return ((int)(res * sign));
}
