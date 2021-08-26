/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:36:36 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/25 19:23:21 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ln;
	size_t	i;

	ln = ft_strlen(little);
	i = 0;
	if (ln == 0)
		return ((char *)big);
	while (*big && (len - i++) >= ln)
	{
		if (!ft_strncmp(big, little, ln))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
