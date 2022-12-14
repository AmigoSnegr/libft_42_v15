/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:43:04 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/14 20:52:07 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	ch;
	char			*tmp_str;
	size_t			i;
	
	ch = c;
	tmp_str = (char *)str;
	i = 0;
	while (tmp_str[i] != 0 && n--)
	{
		tmp_str[i] = ch;
		i++;
	}
	return (tmp_str);
}