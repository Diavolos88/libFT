/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:05:08 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/03 15:35:24 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strjoin2(size_t size1, const char *s1, char *res)
{
	size_t i;

	i = 0;
	while (i < size1)
	{
		res[i] = s1[i];
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	size1;
	size_t	size2;
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size1 = 0;
	size2 = 0;
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	res = malloc(sizeof(char) * (size1 + size2 + 1));
	if (res != NULL)
	{
		i = ft_strjoin2(size1, s1, res);
		while (i < size1 + size2)
		{
			res[i] = s2[i - size1];
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}
