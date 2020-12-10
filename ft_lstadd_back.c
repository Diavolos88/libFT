/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:14:07 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/03 17:22:20 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*root;

	root = *lst;
	if (root == NULL)
		*lst = new;
	else
	{
		while (root)
		{
			if (root->next == NULL)
			{
				root->next = new;
				break ;
			}
			root = root->next;
		}
	}
}
