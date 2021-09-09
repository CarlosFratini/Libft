/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:21:36 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/08 20:43:39 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*ft_search_start(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	str = ft_strdup(s1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s2[i])
	{
		if (*str == s2[i])
		{
			ft_strlcpy (str, str + 1, ft_strlen(str));
			i = 0;
			continue ;
		}
		i++;
	}
	return (str);
}

static char	*ft_search_end(char *s1, const char *s2)
{
	char	*str;
	size_t	len;
	size_t	i;

	i = 0;
	str = ft_strdup(s1);
	if(str == NULL)
		return (NULL);
	len = ft_strlen(str);
	while (s2[i])
	{
		if (str[len - 1] == s2[i])
		{
			ft_strlcpy (str, str, len);
			len = ft_strlen(str);
			i = 0;
			continue ;
		}
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	if (!(*set))
		return ((char *)s1);
	if (!(*s1) && !(*set))
		return (NULL);
	str = ft_search_start (s1, set);
	if(str == NULL)
		return (NULL);
	str = ft_search_end (str, set);
	return (str);
}
