/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:24:07 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/25 03:56:40 by yabenman         ###   ########.fr       */
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
    i= 0;
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

static void join_args(int ac , char **av, t_stacks *s)
{
    char *tmp1;
    char *tmp2;
    int i;
    
    i = 0;
    tmp2 = ft_strdup("");
    while(++i < ac && av[i] != NULL)
    {
        tmp1  = ft_strjoin(tmp2, av[i]);
        if(tmp2)
            free(tmp2);
        if(i != ac - 1)
        {
            tmp2 = ft_strjoin(tmp1," ");
            if(tmp1)
                free(tmp1);
            tmp1 = tmp2;
        }
    }
    s->join_args = ft_strdup(tmp1);
    if(s->join_args == NULL)
        free_and_exit_with_message(s,"Error\n");
    if(tmp1)
        free(tmp1);
}

int main(int ac , char **av)
{
    t_stacks *s;
    
    check_args(ac,av);
    s = malloc(sizeof *s);
    if(s == NULL)
        exit(1);
    init_stacks(ac,av,s);
    join_args(ac,av,s);
    parse_numbers(s);
    exit_if_sorted_or_has_duplicated(s,0);
    create_index(s);
}