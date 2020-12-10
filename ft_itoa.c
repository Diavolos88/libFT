/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:43:54 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/09 16:42:22 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_itoa_size(int n, long int *num)
{
	size_t	res;
	long	tmp_n;

	res = 0;
	if (n < 0)
	{
		*num = n * (-1);
		res++;
		tmp_n = n * (-1);
	}
	else
	{
		*num = n;
		tmp_n = n;
	}
	while (tmp_n != 0)
	{
		tmp_n /= 10;
		res++;
	}
	return (res);
}

char	*ft_itoa_min(void)
{
	char	*res;

	if ((res = malloc(sizeof(char) * (11))))
	{
		res[0] = '-';
		res[1] = '2';
		res[2] = '1';
		res[3] = '4';
		res[4] = '7';
		res[5] = '4';
		res[6] = '8';
		res[7] = '3';
		res[8] = '6';
		res[9] = '4';
		res[10] = '8';
		res[11] = '\0';
	}
	return (res);
}

char	*ft_itoa_zero(void)
{
	char	*res;

	res = malloc(sizeof(char) * (2));
	res[0] = '0';
	res[1] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	long int	tmp_n;
	size_t		i;
	char		*res;

	if (n == -2147483648)
		return (ft_itoa_min());
	if (n == 0)
		return (ft_itoa_zero());
	i = ft_itoa_size(n, &tmp_n);
	res = malloc(sizeof(char) * (i + 1));
	if (res != NULL)
	{
		res[i] = '\0';
		while (tmp_n != 0)
		{
			res[--i] = ((tmp_n % 10) + '0');
			tmp_n = tmp_n / 10;
		}
		if (i != 0)
			res[0] = '-';
	}
	return (res);
}
