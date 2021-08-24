/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:35:05 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/24 13:08:01 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	char		*dest;
	const char	*src;
	char		*r_dest;
	const char	*r_src ;

	dest = (char *)to;
	src = (const char *)from;
	if (dest > src)
	{
		r_dest = dest + (size - 1);
		r_src = src + (size - 1);
		while (size-- > 0)
		{
			*r_dest-- = *r_src--;
		}
	}
	else
	{
		while (size-- > 0)
		{
			*dest++ = *src++;
		}
	}
	return (to);
}
