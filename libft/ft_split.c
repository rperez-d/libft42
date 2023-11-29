/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:15:30 by rperez-d          #+#    #+#             */
/*   Updated: 2023/11/29 15:15:39 by rperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char sep)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != sep)
			++s;
	}
	return (word_count);
}
// * Mirar para modificar esto a mi gusto

static void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab_ptr;
	char const	*tmp;

	tmp = s;
	tab_ptr = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*tab_ptr = ft_substr(s, 0, tmp - s);
			s = tmp;
			++tab_ptr;
		}
	}
	*tab_ptr = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**word_split;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	word_split = (char **)malloc((size + 1) * sizeof(char *));
	if (word_split == NULL)
		return (NULL);
	ft_allocate(word_split, s, c);
	return (word_split);
}
