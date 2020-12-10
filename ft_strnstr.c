/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:21:07 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/03 16:36:25 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	tmp_h;
	size_t	i;

	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	tmp_h = 0;
	while (haystack[tmp_h] && tmp_h < len)
	{
		if (haystack[tmp_h] == needle[0])
		{
			i = 1;
			while (needle[i] && haystack[tmp_h + i] == needle[i]
			&& (tmp_h + i) < len)
				i++;
			if (needle[i] == '\0')
				return ((char*)haystack + tmp_h);
		}
		tmp_h++;
	}
	return (0);
}
