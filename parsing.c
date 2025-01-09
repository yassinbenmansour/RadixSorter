/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:39:43 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/09 13:39:44 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	initstack(t_data *stack, int count)
{
	stack->stack_a = malloc(sizeof(int) * count);
	stack->stack_b = malloc(sizeof(int) * count);
	stack->size_a = count;
	stack->size_b = 0;
}

void	argfree(char **arg, int i)
{
	i = 0;
	while (arg[i])
	{
		free(arg[i]);
		i++;
	}
	free(arg);
}

void	parsing(int ac, char **av, t_data *stack)
{
	int		i;
	int		count;
	char	*tmp;
	char	**arg;

	count = 0;
	i = 0;
	tmp = ft_strdup("");
	while (++i < ac)
	{
		check(av[i]);
		check_empty2(av[i]);
		tmp = ft_join(tmp, av[i]);
		tmp = ft_join(tmp, " ");
	}
	arg = ft_split(tmp, ' ');
	free(tmp);
	count = check_empty(arg, count);
	initstack(stack, count);
	after_split(stack, arg);
	argfree(arg, i);
	stack->fake = copyarray(stack->stack_a, stack->size_a);
	sorted(stack);
	duplicate(stack);
}
