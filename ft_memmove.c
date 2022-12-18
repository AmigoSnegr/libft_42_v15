/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:26:40 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/16 22:41:47 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;
	int		i;

	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	i = 0;
	if (!(dest || src))
		return NULL;
	while (n--)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	// tmp_dest[i] = 0;
	return (tmp_dest);
}
