/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:34:07 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/04 11:52:19 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*substr;
	size_t	size;

	size = len + 1;
	str = malloc (sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	if(start < ft_strlen(s))
		substr = (char *)s + start;
	else
		substr = (char *)s + ft_strlen(s);
	ft_strlcpy (str, substr, size);
	return (str);
}
