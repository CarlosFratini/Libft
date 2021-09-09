/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:32:38 by ceduard2          #+#    #+#             */
/*   Updated: 2021/09/08 19:01:28 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr++ = 0;
		len--;
	}
}
