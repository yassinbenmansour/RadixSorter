/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:24:07 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/22 23:58:55 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void free_and_exit_with_message(t_stacks *s, char *msg)
{
    if(msg)
        write(2,msg,ft_strlen(msg));
    if(s != NULL)
    {
        if(s->a != NULL)
            free(s->a);
        if(s->b != NULL)
            free(s->b);
        if(s->join_args != NULL)
            free(s->join_args);
        if(s != NULL)
            free(s); 
    }
    exit(0);
}

static void check_args(int ac, char **av)
{
    int i;
    int j;
    if(ac < 2)
    {
        free_and_exit_with_message(NULL,"");
    }
}

int main(int ac , char **av)
{
    t_stacks *s;
    
    check_args(ac,av);
}