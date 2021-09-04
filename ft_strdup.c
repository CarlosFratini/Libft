/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:06:15 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/04 13:31:29 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	size;

	size = (ft_strlen(str) + 1);
	s = (char *)malloc(sizeof(char *) * size);
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, str, size);
	return (s);
}
