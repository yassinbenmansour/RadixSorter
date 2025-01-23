/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:11:29 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/23 03:26:09 by yabenman         ###   ########.fr       */
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


#endif
 