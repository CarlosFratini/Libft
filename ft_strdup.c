/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:06:15 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/25 21:48:37 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *str)
{
	char *block;
	size_t	ls;

	ls = ft_strlen(str);
	block = (char *)malloc(sizeof(*block) * ls);
	return (block);
}

int main()
{
	return (0);
}
