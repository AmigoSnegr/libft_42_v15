/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:43:49 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/18 22:03:30 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	algorythm(const char *str, size_t i, int result, int minus)
{
	while (i < ft_strlen(str))
	{
		if ((!(str[i] >= 48 && str[i] <= 57))
			&& (str[i] != '\f' && str[i] != '\t' && str[i] != '\n'
				&& str[i] != '\r' && str[i] != '\v'
				&& str[i] != '-' && str[i] != '+' && str[i] != ' '))
			break ;
		if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
			minus = -1;
		if (str[i] == '-' || str[i] == '+')
		{
			if (result != 0)
				break ;
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break ;
		}
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (str[i] - '0');
		else if (result != 0)
			break ;
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
