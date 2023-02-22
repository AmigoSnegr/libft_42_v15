/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debizhan <debizhan@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:39:24 by dbizjano          #+#    #+#             */
/*   Updated: 2023/02/22 23:10:32 by debizhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = NULL;
	if (!ft_isascii(c))
		return (NULL);
	while (*str)
	{
		if (*str == c)
			ptr = (char *)str;
		str++;
	}
	if (*str == c)
		return ((char *)str);
	else
		return (ptr);
}
