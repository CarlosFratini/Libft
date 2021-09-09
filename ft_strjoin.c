/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:07:59 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/08 19:29:15 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size1;
	size_t	size2;

	size1 = ft_strlen(s1) + 1;
	size2 = ft_strlen(s2) + 1;
	str = malloc(sizeof(*str) * (size1 + size2));
	if (str == NULL)
		return (NULL);
	ft_strlcpy (str, s1, size1);
	ft_strlcat (str, s2, size1 + size2);
	return (str);
}
