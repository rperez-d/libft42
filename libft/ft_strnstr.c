/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:53:04 by rperez-d          #+#    #+#             */
/*   Updated: 2023/11/28 18:33:05 by rperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	c;

	if (str2[0] == '\0')
		return ((char *)str1);
	i = 0;
	while (str1[i] != '\0' && i < n)
	{
		c = 0;
		while ((str1[i + c] == str2[c]) && (i + c) < n)
		{
			if (str2[c + 1] == '\0')
				return ((char *)(&str1[i]));
			c++;
		}
		i++;
	}
	return (NULL);
}
