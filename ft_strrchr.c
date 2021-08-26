/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:36:11 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/25 21:22:36 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		slen;

	slen = ft_strlen(s);
	str = (char *)s + slen;
	while (slen-- >= 0)
	{
		if (*str == c)
			return str;
		str--;
	}
	return (NULL);
}
