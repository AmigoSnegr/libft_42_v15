/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:12:12 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/21 17:28:48 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n--)
	{
		if (*(char *)str == (char)c)
		{
			return ((void *)str);
		}
		(void *)str++;
	}
	return (NULL);
}
