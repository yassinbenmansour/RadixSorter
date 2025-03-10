/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 06:48:35 by yabenman          #+#    #+#             */
/*   Updated: 2024/10/31 06:51:47 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		indx;
	int		len;
	char	*str;

	indx = 0;
	len = ft_strlen(s1);
	str = ((char *)malloc(sizeof(char) * (len +1)));
	if (str == NULL)
		return (NULL);
	while (indx < len)
	{
		str[indx] = s1[indx];
		indx++;
	}
	str[indx] = '\0';
	return (str);
}
/*
int main()
{
	char 	*str;
	char	*tmp = "HAHAHA \0 tu me vois pas !";
    int l = ft_strlen(tmp);
	str = ft_strdup(tmp);
	printf ("%d\n",ft_strncmp(str, tmp,l));
}
*/
