/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:16:56 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/08 19:03:56 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dst;
	while (len > 0)
	{
		*ptr++ = (unsigned char)c;
		len--;
	}
	return (dst);
}
