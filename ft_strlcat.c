/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:34:04 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/16 12:28:09 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cap;
	size_t	i;
	size_t	d_len;

	cap = dstsize - ft_strlen(dst);
	i = 0;
	d_len = ft_strlen(dst);
	while (cap--)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (ft_strlen(dst) + ft_strlen(src) > dstsize)
	{
		return (dstsize);
	}
	return (ft_strlen(dst));
}
