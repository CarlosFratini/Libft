/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:32:38 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/23 17:35:04 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *block, size_t size)
{
	unsigned char	*ptr;

	ptr = block;
	while (size > 0)
	{
		*ptr++ = 0;
		size--;
	}
}
