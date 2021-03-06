/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:01:24 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/05 12:09:52 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	sp_size(char const *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	j;

	start = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c && (start - i) > 1)
		{
			j++;
			start = i + 1;
		}
		else if (s[i] == c)
			start = i + 1;
		i++;
	}
	j++;
	return (j);
}

char	*add_word(size_t start, size_t end, char const *s)
{
	char	*res;
	size_t	i;

	i = 0;
	res = malloc(sizeof(char) * (end - start + 1));
	if (res != NULL)
	{
		while (start != end)
			res[i++] = s[start++];
		res[i] = '\0';
	}
	return (res);
}

char	**sp_init(size_t *i, size_t size, size_t *j, size_t *start)
{
	*j = 0;
	*start = 0;
	*i = 0;
	return (malloc(sizeof(char*) * (size + 1)));
}

void	*ft_split_free(char **start)
{
	size_t	i;

	i = 0;
	while (start[i] != NULL)
		free(start[i++]);
	free(start);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**res;
	size_t	start;

	if (s != NULL && ((res = sp_init(&i, sp_size(s, c), &j, &start)) != NULL))
	{
		while (s[i])
		{
			if (s[i] == c && (start - i) > 1)
			{
				res[j] = add_word(start, i, s);
				if (res[j++] == NULL)
					return (ft_split_free(res));
				start = i + 1;
			}
			else if (s[i] == c)
				start = i + 1;
			i++;
		}
		if (start != i)
			res[j++] = add_word(start, i, s);
		res[j] = 0;
	}
	return (s == NULL ? NULL : res);
}
