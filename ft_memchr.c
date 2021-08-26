/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:11:55 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/25 19:04:25 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*src;
	unsigned char	u;

	src = (unsigned char *)b;
	u = (unsigned char)c;
	while (len-- > 0)
	{
		if (*src == u)
		{
			return (src);
		}
		src++;
	}
	return (NULL);
}
