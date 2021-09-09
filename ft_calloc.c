/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:05:57 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/08 19:00:14 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*b;

	b = malloc(num * size);
	if (b == NULL)
		return (NULL);
	ft_bzero(b, size * num);
	return (b);
}
