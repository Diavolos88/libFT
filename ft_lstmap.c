/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:28:38 by ealexa            #+#    #+#             */
/*   Updated: 2020/11/04 17:30:17 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;

	if (lst != NULL)
	{
		start = ft_lstnew(f(lst->content));
		lst = lst->next;
		while (lst)
		{
			new = ft_lstnew(f(lst->content));
			if (new == NULL)
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			ft_lstadd_back(&start, new);
			lst = lst->next;
		}
		return (start);
	}
	return (NULL);
}
