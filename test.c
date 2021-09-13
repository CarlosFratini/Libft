/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:35:29 by jtoty             #+#    #+#             */
/*   Updated: 2021/09/12 09:13:16 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_strtrim(char *s1, char *set)
{
	char	*strtrim;

	if (!(strtrim = ft_strtrim(s1, set)))
		ft_print_result("NULL");
	else
		ft_print_result(strtrim);
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned");
	else
		free(strtrim);
}

int				main(int argc, const char *argv[])
{
	char	set [] = "\t \n";
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		check_strtrim(s1, set);
	}
	else if (arg == 2)
	{
		char s1[] = "lorem ipsum dolor sit amet \n \t ";
		check_strtrim(s1, set);
	}
	else if (arg == 3)
	{
		char s1[] = " \n \t lorem ipsum dolor sit amet";
		check_strtrim(s1, set);
	}
	else if (arg == 4)
	{
		char s1[] = "  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ";
		check_strtrim(s1, set);
	}
	else if (arg == 5)
	{
		char s1[] = "          ";
		check_strtrim(s1, set);
	}
	return (0);
}
