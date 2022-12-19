/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:39:24 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/18 22:18:54 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*ptr;

	if (*str == '\0')
	{
		return (NULL);
	}
	if (!ft_isascii(c))
	{
		return (NULL);
	}
	while (*str)
	{
		if (*str == c)
		{
			ptr = str;
		}
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	if (*ptr != 0)
		return ((char *)ptr);
	return (NULL);
}
