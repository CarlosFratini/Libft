/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:58:13 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/10 14:40:15 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numofchars(char const *s, char c)
{
	int		count;
	int		flag;

	count = 0;
	flag = 1;
	while (*s)
	{
		if (*s != c && flag)
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

static int	ft_check_next(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s && (*s != c))
	{
		len++;
		s++;
	}
	return (len);
}

static char	**ft_strsplit(char **ptr, char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
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
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		num;

	if (s == NULL)
		return (NULL);
	num = ft_numofchars (s, c);
	ptr = (char **)malloc(sizeof(*ptr) * (num + 1));
	if (ptr == NULL)
		return (NULL);
	ptr = ft_strsplit(ptr, s, c);
	ptr[num] = NULL;
	return (ptr);
}
