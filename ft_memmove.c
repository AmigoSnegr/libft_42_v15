/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:26:40 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/18 21:11:49 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;

	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	if (dest == src)
		return (dest);
	if (tmp_src < tmp_dest)
	{
		while (n--)
			*(tmp_dest + n) = *(tmp_src + n);
		return (tmp_dest);
	}
	while (n-- != 0)
			*tmp_dest++ = *tmp_src++;
	return (tmp_dest);
}
