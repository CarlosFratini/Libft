/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:10:02 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/24 12:48:35 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t size)
{
	char		*dest;
	const char	*src;

	dest = (char *)to;
	src = (const char *)from;
	while (size-- > 0)
	{
		*dest++ = *src++;
	}
	return (to);
}
