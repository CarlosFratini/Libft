/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:21:36 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/04 13:34:55 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_search_start(char const *s1, char const *s2, size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc (sizeof(char *) * size);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, size);
	i = 0;
	while (s2[i])
	{
		if (*str == s2[i])
		{
			str = ft_substr (str, 1, ft_strlen(str));
			i = 0;
			continue ;
		}
		i++;
	}
	return (str);
}

static char	*ft_search_end(char *s1, const char *s2, size_t size)
{
	char	*str;
	size_t	len;
	size_t	i;

	str = (char *)malloc (sizeof(char *) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	len = ft_strlcpy(str, s1, size);
	while (s2[i])
	{
		if (str[len - 1] == s2[i])
		{
			str = ft_substr(str, 0, len - 1);
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
	size_t	size;

	if (!(*set))
		return ((char *)s1);
	if (!(*s1) && !(*set))
		return (NULL);
	size = ft_strlen (s1) + 1;
	str = ft_search_start (s1, set, size);
	str = ft_search_end (str, set, size);
	return (str);
}
