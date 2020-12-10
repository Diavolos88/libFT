/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:46:50 by ealexa            #+#    #+#             */
/*   Updated: 2020/10/30 16:03:15 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	unsigned char	tmp_c;
	size_t			i;

	tmp_c = (unsigned char)c;
	tmp_dst = (unsigned char*)dst;
	tmp_src = (unsigned char*)src;
	i = 0;
	while (n--)
	{
		*(tmp_dst + i) = *(tmp_src + i);
		if (tmp_c == *(tmp_dst + i))
			return ((void*)(dst + ++i));
		i++;
	}
	return (0);
}
