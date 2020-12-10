/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:50:13 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/03 13:07:41 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char	*tmp_dst;
	char	*s;
	size_t	n;
	size_t	size;

	tmp_dst = dst;
	s = (char*)src;
	n = dstsize;
	while (n-- != 0 && *tmp_dst != '\0')
		tmp_dst++;
	size = tmp_dst - dst;
	n = dstsize - size;
	if (n == 0)
		return (size + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*tmp_dst++ = *s;
			n--;
		}
		s++;
	}
	*tmp_dst = '\0';
	return (size + (s - src));
}
