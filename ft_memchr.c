/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:12:12 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/14 18:48:32 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	char *tmp = (char*)str;
	
	while (str != 0 && n--)
	{
		if (*tmp == (char)c)
		{
			return (tmp);
		}
		tmp++;
	}
	return (NULL);
}
