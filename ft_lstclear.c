/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:15:22 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/10 14:24:16 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;

	if (lst != NULL)
	{
		while (*lst != NULL)
		{
			curr = (*(*lst)).next;
			del((*(*lst)).content);
			free(*lst);
			*lst = curr;
		}
	}
}
