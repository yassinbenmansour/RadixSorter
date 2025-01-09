/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:39:47 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/09 13:39:48 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	ft_free(void *s)
{
	if (s)
		free(s);
	s = NULL;
}

void	struct_free(t_data *array)
{
	free(array->stack_a);
	free(array->stack_b);
	free(array->fake);
	free(array);
}

int	main(int ac, char **av)
{
	t_data	*ptr;

	ptr = NULL;
	if (ac == 1)
		exit(0);
	ptr = malloc (sizeof(t_data));
	if (!ptr)
		return (free(ptr), 1);
	parsing(ac, av, ptr);
	if (ptr->size_a == 2)
		sort_2(ptr);
	else if (ptr->size_a == 3)
		sort_3(ptr);
	else if (ptr->size_a == 4)
		sort_4(ptr);
	else if (ptr->size_a <= 5)
		sort_5(ptr);
	else if (ptr->size_a <= 100)
		sort(ptr, 4);
	else if (ptr->size_a > 100)
		sort(ptr, 5);
	struct_free(ptr);
	return (0);
}
