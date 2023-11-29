/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:44:08 by rperez-d          #+#    #+#             */
/*   Updated: 2023/11/28 18:25:45 by rperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esta es la función que debería de poner según enel man
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		i = ft_strlen(src);
		return (i);
	}
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = ft_strlen(src);
	return (i);
}
/*
int main  (){
	char array[] = "hola";
	char array2[5];
	char *final;

	final = ft_strcpy(array2, array);
	printf("%s\n", final);
	return (0);
}*/