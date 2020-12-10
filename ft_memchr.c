/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:03:29 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/05 12:57:45 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;

	tmp_s = (unsigned char*)s;
	while (n--)
	{
		if ((unsigned char)c == *(tmp_s))
			return (tmp_s);
		tmp_s++;
	}
	return (0);
}
