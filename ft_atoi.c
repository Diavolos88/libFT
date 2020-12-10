/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:58:33 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/07 16:17:03 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_check(long long int minus)
{
	if (minus == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	char			*tmp_str;
	size_t			i;
	long long int	res;
	long long int	res2;
	long long int	minus;

	minus = 1;
	res = 0;
	tmp_str = (char*)str;
	i = 0;
	while (tmp_str[i] == ' ' || tmp_str[i] == '\t' || tmp_str[i] == '\n'
	|| tmp_str[i] == '\v' || tmp_str[i] == '\f' || tmp_str[i] == '\r')
		i++;
	if (tmp_str[i] == '-' || tmp_str[i] == '+')
		if (tmp_str[i++] == '-')
			minus = -1;
	while (tmp_str[i] >= '0' && tmp_str[i] <= '9')
	{
		res2 = res;
		res = res * 10 + (tmp_str[i] - '0');
		if (res < res2)
			return (ft_atoi_check(minus));
		i++;
	}
	return (int)(minus * res);
}
