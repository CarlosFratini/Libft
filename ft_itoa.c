/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:06:14 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/31 13:09:59 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_int_to_char(char *s, int n)
{
	int	num;

	if (n < 0)
	{
		n = n * -1;
		*s++ = '-';
	}
	num = n;
	while (num > 0)
	{
		num = num / 10;
		s++;
	}
	*s-- = '\0';
	while (n > 0)
	{
		*s-- = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*ptr;

	str = (char *)malloc(sizeof(char) * 12);
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	ptr = str;
	str = ft_int_to_char(str, n);
	return (ptr);
}
