/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:08:58 by ealexa            #+#    #+#             */
/*   Updated: 2020/10/29 12:31:07 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp_s;

	tmp_s = (char*)s;
	while (*(tmp_s) != '\0')
	{
		if (*(tmp_s) == (char)c)
			return (tmp_s);
		tmp_s++;
	}
	if (*(tmp_s) == (char)c)
		return (tmp_s);
	return (0);
}
