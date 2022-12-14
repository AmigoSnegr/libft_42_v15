/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:22:07 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/14 19:36:09 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;
	int	j;
	int	c1;
	int	c2;

	i = 0;
	j = 0;
	while (str1[i] != 0 && n--)
	{
		c1 = str1[i];
		c2 = str2[i];
		if (c1 != c2)
			break ;
		i++;
		j++;
	}
	return (c1 - c2);
}
