/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:25:18 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/03 17:42:04 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*root;
	t_list	*tmp;

	root = *lst;
	if (root != NULL)
	{
		while (root)
		{
			tmp = root;
			del(root->content);
			root = root->next;
			free(tmp);
		}
		*lst = NULL;
	}
}
