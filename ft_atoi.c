/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:43:49 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/13 17:32:17 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	algorythm(const char *str, size_t i, int minus, int result)
{
	int	next;

	while (str[i] != 0)
	{
		if (i != (ft_strlen(str) - 1))
			next = ft_isdigit(str[i + 1]);
		if (str[i] >= 48 && str[i] <= 57)
		{
			if (str[0] == '-' && !(str[1] > 47 && str[1] < 58))
				return (0);
			if (str[i - 1] == '-')
				minus = 1;
			result = result * 10 + str[i] - 48;
			if (result == 214748364 && minus == 1 && str[i + 1] == '8')
				return (-2147483648);
			if (next == 0)
				break ;
		}
		i++;
	}
	if (minus == 1)
		return (-result);
	return (result);
}

int	ft_atoi(const char *str)
{
	int		result;
	int		minus;
	int		k;
	size_t	i;

	i = 0;
	minus = 0;
	result = 0;
	k = algorythm(str, i, minus, result);
	return (k);
}
