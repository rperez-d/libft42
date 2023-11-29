/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:55:23 by rperez-d          #+#    #+#             */
/*   Updated: 2023/11/28 18:56:22 by rperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = (void *)malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}

/*
int	main(void)
{
	char	*str;
	int		tamano;
	int		*entero;

	tamano = 20;
	str = (char *)malloc(tamano * sizeof(char));
	entero = (int *)malloc(10*sizeof(int));
}
*/
