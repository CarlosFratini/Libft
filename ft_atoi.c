/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:35:50 by ceduard2          #+#    #+#             */
/*   Updated: 2021/08/24 15:17:21 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c);

int	ft_atoi(const char *string)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*string))
	{
		string++;
	}
	if (*string == '-')
		sign = -1;
	if (*string == '-' || *string == '+')
		string++;
	while (*string >= '0' && *string <= '9')
	{
		num = num * 10 + *string++ - '0';
	}
	return (num * sign);
}

int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}
