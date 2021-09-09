/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:06:14 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/08 19:27:11 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*ft_int_to_char(char *s, int n, size_t size)
{
	int	num;

	num = n;
	s[size] = '\0';
	size--;
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		s[size] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	return (s);
}

static char	*ft_zerormin(int n)
{
	char	*str;

	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	else if (n == -2147483648)
	{
		str = (char *)malloc(sizeof(*str) * 12);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	return (NULL);
}

static size_t	ft_nsize(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		n = n * -1;
		size++;
	}
	while (n > 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	str = ft_zerormin(n);
	if (str != NULL)
		return (str);
	size = ft_nsize(n);
	str = (char *)malloc(sizeof(*str) * (size + 1));
	if (str == NULL)
		return (NULL);
	str = ft_int_to_char(str, n, size);
	return (str);
}
