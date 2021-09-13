/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:21:36 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/13 13:33:35 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[i] != '\0')
	{
		if (s1[j] == set[i])
		{
			j++;
			i = 0;
			continue ;
		}
		i++;
	}
	return (j);
}

static int	ft_search_end(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = (int)ft_strlen(s1);
	while (set[i])
	{
		if (s1[j - 1] == set[i])
		{
			j--;
			i = 0;
			continue ;
		}
		i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		s;
	size_t	e;

	s = 0;
	s = ft_search_start(s1, set);
	e = (size_t)ft_search_end(s1, set) - s;
	str = ft_substr(s1, s, e);
	return (str);
}
