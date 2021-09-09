/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:36:11 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/08 18:31:24 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	len = ft_strlen(s);
	if(len == 0)
		return (NULL);
	str = (char *)s + len;
	while (len-- >= 0)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (NULL);
}
