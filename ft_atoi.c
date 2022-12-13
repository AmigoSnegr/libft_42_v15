/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:43:49 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/13 20:22:42 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	algorythm(const char *str, size_t i, int result, int minus)
{
	int	current;
	int	next;

	while (str[i] != 0)
	{
		current = ft_isdigit(str[i]);
		next = ft_isdigit(str[i + 1]);
		if ((current == 0 && next == 0)
			|| (current == 0 && next != 0 && str[i] != '-'))
			return (0);
		if (str[0] == '-' && next != 0)
			minus = -1;
		if (current != 0)
		{
			result = result * 10 + str[i] - 48;
			if (current != 0 && next == 0)
				break ;
			if (result == 214748364 && str[i + 1] == '8' && minus == 1)
			{
				return (-2147483648);
			}
		}
		i++;
	}
	return (result * minus);
}

int	ft_atoi(const char *str)
{
	int		result;
	int		minus;
	size_t	i;

	i = 0;
	minus = 1;
	result = 0;
	return (algorythm(str, i, result, minus));
}
