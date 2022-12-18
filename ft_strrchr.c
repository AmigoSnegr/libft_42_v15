/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:39:24 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/16 23:11:15 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*ptr;
	
	while (*str != '\0')
	{
		if (*str == c)
		{
			ptr = str;
		}
		str++;
	}
	if (c == '\0')
		ptr = str;
	if (*ptr)
		return ((char *)ptr);
	return ((char *)str);
}
