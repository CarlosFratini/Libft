/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:07:17 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/24 14:41:53 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = (const unsigned char *)a1;
	s2 = (const unsigned char *)a2;
	while (size-- > 0)
	{
		if (*s1 != *s2)
			return ((int)(*s1 - *s2));
		s1++;
		s2++;
	}
	return (0);
}
