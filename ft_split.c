/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:58:13 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/03 18:24:32 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char *s1;
	char *s2;
	char **str;
	size_t i;
	size_t len;

	len = ft_strlen(s);
	s1 = (char *)malloc(sizeof(char *) * len);
	s2 = (char *)malloc(sizeof(char *) * len);
	str = (char **)malloc(sizeof(char **) * len);
	if(!s1 || !s2 || !str)
		return NULL;
	i = 0;
	while (s[i] != c)
	{
		i++;
	}
	s1 = ft_substr(s, 0, i - 1);
	s2 = ft_substr(s, i, len);
	str[0] = s1;
	str[1] = s2;
	return (str);
}
