/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:40:16 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/09 13:40:17 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	checkk(char *s)
{
	if (ft_strlen(s) > 11)
	{
		write(2, "Error!\n", 6);
		exit(1);
	}
}

void	check_max_int(long numb, char *s, int i)
{
	if (numb > INT_MAX || numb < INT_MIN || s[i] != '\0')
	{
		write(2, "Error!\n", 6);
		exit(1);
	}
}

int	push_atoi(char *s)
{
	int		i;
	long	numb;
	int		sign;

	numb = 0;
	i = 0;
	sign = 1;
	checkk(s);
	if (s[i] && (s[i] == '+' || s[i] == '-'))
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		numb = (numb * 10) + (s[i] - 48);
		i++;
	}
	numb = numb * sign;
	check_max_int(numb, s, i);
	return ((int)numb);
}
