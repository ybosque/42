/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybosque <ybosque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 19:25:06 by ybosque           #+#    #+#             */
/*   Updated: 2018/06/30 21:29:52 by ybosque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **aslt, void (*del)(void *, size_t))
{
	t_list	*nxt;
	t_list	*tmp;

	nxt = *aslt;
	while (nxt)
	{
		(*del)(nxt->content, nxt->content_size);
		tmp = nxt->next;
		free(nxt);
		nxt = tmp;
	}
	*aslt = NULL;
}
