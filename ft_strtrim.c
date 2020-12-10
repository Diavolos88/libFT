/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:31:43 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/05 12:41:31 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		chek(char s1, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

void	ft_strtrim_init(size_t *i, size_t *start, size_t *end)
{
	*i = 0;
	*start = 0;
	*end = 0;
}

char	*ft_strtrim_cpy(char const *s1)
{
	size_t	size;
	char	*res;
	size_t	i;

	i = 0;
	size = ft_strlen(s1);
	res = malloc(sizeof(char) * (size + 1));
	if (res != NULL)
	{
		while (i < size)
		{
			res[i] = s1[i];
			i++;
		}
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	ft_strtrim_init(&i, &start, &end);
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strtrim_cpy(s1));
	while (s1[end])
		end++;
	while (chek(s1[start], set) && start < end)
		start++;
	while (chek(s1[end - 1], set) && end >= start)
		end--;
	res = malloc(sizeof(char) * (end - start + 1));
	if (res != NULL)
	{
		while (start < end)
			res[i++] = s1[start++];
		res[i] = '\0';
	}
	return (res);
}
