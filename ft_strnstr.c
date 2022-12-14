/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:52:38 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/14 19:19:29 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int		oc;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	oc = -1;
	if (little == 0)
	{
		return ((char *)big);
	}
	while (big[i] != 0 && i < len)
	{
		if (little[j] == big[i] && little[j + 1] == big[i + 1])
		{
			if (oc == -1)
				oc = i;
			j++;
		}
		i++;
	}
	if (oc == -1)
		return (NULL);
	return ((char *)(big + oc));
}
