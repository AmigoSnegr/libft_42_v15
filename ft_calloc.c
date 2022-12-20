/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:31:31 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/20 19:52:04 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return ((void *)ptr);
}
