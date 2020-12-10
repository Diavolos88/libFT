/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:55:44 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/03 11:47:03 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (s == NULL)
		return (NULL);
	i = 0;
	res = malloc(sizeof(char) * (len + 1));
	while (s[i])
		i++;
	if (res != NULL && start < i)
	{
		i = 0;
		while (s[start] && i < len)
			res[i++] = s[start++];
		res[i] = '\0';
	}
	return (res);
}
