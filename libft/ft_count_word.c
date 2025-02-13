/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:17:56 by yabenman          #+#    #+#             */
/*   Updated: 2025/02/10 22:18:44 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	wc;

	wc = 0;
	while (*s)
	{
		if (*s != c)
		{
			wc++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (wc);
}
