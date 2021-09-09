/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:18:48 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/08 18:31:00 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s && (*s != ch))
	{
		s++;
	}
	if (*s == ch)
	{
		return ((char *)(s));
	}
	return (NULL);
}
