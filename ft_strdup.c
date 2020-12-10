/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:41:29 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/03 11:46:43 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*res;

	i = 0;
	while (s1[i])
		i++;
	res = malloc(sizeof(char) * (i + 1));
	if (res != NULL)
	{
		i = 0;
		while (s1[i])
		{
			res[i] = s1[i];
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}
