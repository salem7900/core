/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:29:06 by sabdalla          #+#    #+#             */
/*   Updated: 2026/06/19 11:29:07 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*point;
	t_list	*next;

	if (!lst || !del)
		return ;
	point = *lst;
	while (point)
	{
		next = point->next;
		del(point->content);
		free(point);
		point = next;
	}
	*lst = NULL;
}
