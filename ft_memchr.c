/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:11:55 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/24 14:06:32 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*src;
	unsigned char	u;

	src = (unsigned char *)block;
	u = (unsigned char)c;
	while (size-- > 0)
	{
		if (*src == u)
		{
			return (src);
		}
		src++;
	}
	return (NULL);
}
