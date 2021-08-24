/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:16:56 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/23 17:29:18 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *block, int val, size_t size)
{
	unsigned char	*ptr;

	ptr = block;
	while (size > 0)
	{
		*ptr++ = val;
		size--;
	}
	return (block);
}
