/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:11:29 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/26 04:47:45 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_stacks
{
    int     *a;
    int     *b;
    int     a_size;
    int     b_size;
    char    *join_args;   
}           t_stacks;

void free_and_exit_with_message(t_stacks *s, char *msg);
void init_stacks(int ac, char **av,t_stacks *s);
void parse_numbers(t_stacks *s);
int ft_atol(const char *n , t_stacks *s);
void exit_if_sorted_or_has_duplicated(t_stacks *s, int i);
int is_array_sorted(t_stacks *s);
void sort_three_elements(t_stacks *s);
void sort_four_five_elements(t_stacks *s);
// void radix_sort(t_stacks *s);
void create_index(t_stacks *s);
void swap(char *str,int *array, int size);
void rotate(int *array, int size, char *direction, char *list);

#endif
 