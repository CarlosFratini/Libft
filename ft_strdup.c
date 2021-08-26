/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:06:15 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/25 22:08:22 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*block;
	size_t	ls;

	ls = (ft_strlen(str) + 1);
	block = (char *)malloc(sizeof(*block) * ls);
	if (block == NULL)
		return (NULL);
	ft_strlcpy(block, str, ls);
	return (block);
}
