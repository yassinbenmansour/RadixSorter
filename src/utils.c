/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 03:32:23 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/24 07:38:14 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int ft_count_words(char const *s, char c)
{
    int wc;
    
    wc = 0;
    while(*s)
    {
        if(*s != c)
        {
            wc++;
            while(*s != c && *s)
                s++;
        }
        else
            s++;
    }
    return wc;
}

void init_stacks(int ac, char **av,t_stacks *s)
{
    int i;
    
    i = 0;
    s->a_size = 0;
    s->b_size = 0;
    
    while(--ac)
    {
        if(ft_count_words(av[i + 1], ' '))
            s->a_size += ft_count_words(av[i + 1], ' ');
        else
            s->a_size++;
        i++;
    }
    s->a = malloc(s->a_size * sizeof *s->a);
    if(s->a == NULL)
        free_and_exit_with_message(s,"Error\n");
    s->b = malloc(s->b_size * sizeof *s->b);
    if(s->b == NULL)
        free_and_exit_with_message(s,"Error\n");
}


void parse_numbers(t_stacks *s)
{
    char **tmp;
    int i;
    int j;
    
    i = 0;
    tmp = ft_split(s->join_args, ' ');
    j = 0;
    while (tmp[i] != NULL && tmp[i][0] != '\0')
    {
        s->a[j++] = ft_atol(tmp[i++], s);
        free(tmp[i - 1]);
    }
    free(tmp);
}

int ft_atol(const char *n , t_stacks *s)
{
    int i;
    long sign;
    long long res;    
}
