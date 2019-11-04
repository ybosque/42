/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 19:24:09 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/30 21:29:56 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *val, size_t cs)
{
	t_list	*new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	if (val == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = (void*)malloc(cs)))
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, val, cs);
		new->content_size = cs;
	}
	new->next = NULL;
	return (new);
}
