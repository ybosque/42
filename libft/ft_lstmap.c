/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 19:28:25 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/30 21:29:28 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*first;

	tmp = NULL;
	first = NULL;
	while (lst)
	{
		tmp2 = tmp;
		tmp = ft_lstnew(lst->content, lst->content_size);
		tmp = (*f)(tmp);
		if (first == NULL)
			first = tmp;
		if (tmp2)
			tmp2->next = tmp;
		lst = lst->next;
	}
	return (first);
}
