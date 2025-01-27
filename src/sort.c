/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:37:15 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/26 04:53:04 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int is_array_sorted(t_stacks *s)
{
    int i;
    i = 0;
    while(i < s->a_size - 1)
    {
        if(s->a[i] > s->a[i + 1])
            return (0);
        i++;
    }
    return (1);
}

void sort_three_elements(t_stacks *s)
{
    if(s->a[2] != 2)
    {
        if(s->a[0] == 2)
            rotate(s->a, s->a_size,"up","a");
        else
            rotate(s->a, s->a_size,"down","a");
    }
    if(s->a[0] > s->a[1])
        swap("sa",s->a, s->a_size);
}

void sort_four_five_elements(t_stacks *s)
{
    while(s->b_size <= 1)
    {
        if(s->a[0] == 0 || s->a[0] == 1)
            push("pb",s);
        else 
            rotate(s->a, s->a_size,"up","a");
    }
    if(s->b[0] == 0)
        swap("sb",s->b, s->b_size);
    
}

// void radix_sort(t_stacks *s)
// {
    
// }