/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:14:36 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/22 13:34:51 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int pwr(int num, size_t p);

char *ft_itoa(int num)
{
	size_t	bytes;
	int		devider;
	char	*ptr;
	// size_t	i;

	// i = 0;
	bytes = 0;
	devider = 100;
	while (devider != 0)
		devider = num / pwr(10, bytes++);
	ptr = malloc(sizeof(char) * bytes);
	while (bytes - 2)
	{
		ptr[bytes - 2] = (char)(num % pwr(10, bytes) + 48);
		bytes--;
	}
	// ptr[i] = '\0';
	return (ptr);
}

static int	pwr(int	num, size_t p)
{
	int	result;

	result = 1;
	while (p--)
	{
		result = result *num;
	}
	return (result);
}


