/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:24:07 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/23 07:32:44 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void free_and_exit_with_message(t_stacks *s, char *msg)
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
        free_and_exit_with_message(NULL,"");
    while(++i < ac)
    {
        j = 0;
        if(av[i][0] == '\0' || (av[i][0] && av[i][0] == ' '))
            free_and_exit_with_message(NULL,"Error\n");
        while (av[i][j] != '\0')
        {
            if ((!(ft_isdigit(av[i][j])) && (av[i][j] != ' ')
                    && (av[i][j] != '-' && av[i][j] != '+'
                        && av[i][j] != ' ')) || (av[i][j] == '-'
                    && av[i][j + 1] == '\0') || (av[i][j] == '+'
                    && av[i][j + 1] == '\0') || (av[i][j] == '-'
                    && av[i][j + 1] == ' ') || (av[i][j] == '+' && av[i][j
                    + 1] == ' '))
                free_and_exit_with_message(NULL, "Error\n");
            j++;
        }
    }
}

int main(int ac , char **av)
{
    t_stacks *s;
    
    check_args(ac,av);
    s = malloc(sizeof *s);
    if(s == NULL)
        exit(1);
    init_stacks(ac,av,s);
}