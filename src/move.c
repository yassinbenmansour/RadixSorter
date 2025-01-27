/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:16:21 by yabenman          #+#    #+#             */
/*   Updated: 2025/01/26 04:29:57 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void swap(char *str,int *array, int size)
{
    int tmp;
    
    if(size <= 0)
        return ;
    tmp = array[0];
    array[0] = array[1];
    array[1] = tmp;
    ft_putendl_fd(str,1);
}

void rotate(int *array, int size, char *direction, char *list)
{
    int tmp;
    if(size < 0)
        return ;
    if(ft_strncmp(direction,"up",5) == 0)
    {
        tmp = array[0];
        ft_memmove(array, array + 1,sizeof(int) * (size - 1));
        array[size -1] = tmp;
        write(1,"r",1);
    }
    if(ft_strncmp(direction,"down",5) == 0)
    {
        tmp = array[size - 1];
        ft_memmove(array + 1, array ,sizeof(int) * (size - 1));
        array[0] = tmp;
        write(1,"rr",2);
    }
    ft_putendl_fd(list,1);
}