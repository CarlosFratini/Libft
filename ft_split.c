/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:58:13 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/08 22:38:05 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numofchars(char const *s, char c)
{
	size_t	count;
	int		flag;

	count = 0;
	flag = 1;
	while (*s)
	{
		if(*s != c && flag)
		{
			flag = 0;
			count++;
		}
		else if (*s == c)
			flag = 1;
		s++;
	}
	return (count);
}

static size_t	ft_check_next(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && (*s != c))
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	len;
	size_t num;

	i = 0;
	num = ft_numofchars (s, c);
	ptr = (char **)malloc(sizeof(*ptr) * num + 1);
	if (ptr == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = ft_check_next(s, c);
			ptr[i] = (char *)malloc(sizeof(char) * (len + 1));
			if (ptr[i] != NULL)
				ft_strlcpy(ptr[i], s, len + 1);
			s = s + len ;
			i++;
		}
		else
			s++;
	}
	ptr[num] = NULL;
	return (ptr);
}
