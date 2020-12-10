/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:44:19 by ealexa            #+#    #+#             */
/*   Updated: 2020/10/29 12:34:34 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	*tmp_s;

	tmp_s = (char*)s;
	res = 0;
	while (*tmp_s)
	{
		if (*tmp_s == (char)c)
			res = tmp_s;
		tmp_s++;
	}
	if (*tmp_s == (char)c)
		res = tmp_s;
	return (res);
}
