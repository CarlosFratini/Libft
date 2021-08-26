/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:35:05 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/25 19:06:57 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*r_d;
	const char	*r_s ;

	d = (char *)dst;
	s = (const char *)src;
	if (d > s)
	{
		r_d = d + (len - 1);
		r_s = s + (len - 1);
		while (len-- > 0)
		{
			*r_d-- = *r_s--;
		}
	}
	else
	{
		while (len-- > 0)
		{
			*d++ = *s++;
		}
	}
	return (dst);
}
