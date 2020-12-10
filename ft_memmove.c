/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:16:51 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/03 11:58:33 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char*)dst;
	tmp_src = (unsigned char*)src;
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (len--)
			*(tmp_dst++) = *(tmp_src++);
	}
	else
	{
		tmp_dst += len - 1;
		tmp_src += len - 1;
		while (len--)
			*(tmp_dst--) = *(tmp_src--);
	}
	return (dst);
}
