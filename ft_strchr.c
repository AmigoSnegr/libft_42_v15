/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:12:11 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/14 10:46:00 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != 0)
	{
		if (*str == c)
		{
			return ((char*)str);
		}
		str++;
	}
	return (NULL);
}
