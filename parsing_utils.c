/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:39:37 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/09 13:39:38 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	duplicate(t_data *stack)
{
	if (check_duplicate(stack->stack_a, stack->size_a))
	{
		write (2, "Error!\n", 6);
		exit (1);
	}
}

int	check_empty(char **arg, int count)
{
	count = 0;
	while (arg[count])
		count++;
	if (count == 0)
	{
		write(2, "Error!\n", 6);
		exit(1);
	}
	return (count);
}

void	check_empty2(char *arg)
{
	int	count;
	int	i;

	count = 0;
	i = -1;
	while (arg[++i] == ' ' || arg[++i] == '\t')
		count++;
	if (count == ft_strlen(arg))
	{
		write(2, "Error!\n", 6);
		exit(1);
	}
}

void	after_split(t_data *stack, char **arg)
{
	int	i;

	i = -1;
	while (arg[++i])
	{
		check(arg[i]);
		stack->stack_a[i] = push_atoi(arg[i]);
	}
}
