/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:52:59 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/10 14:26:40 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*temp;

	newlst = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		temp = ft_lstnew(f((*lst).content));
		if (temp == NULL)
			ft_lstclear(&temp, del);
		ft_lstadd_back(&newlst, temp);
		lst = (*lst).next;
	}
	return (newlst);
}
