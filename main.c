/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:42:08 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/14 10:26:26 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	char	c[] = "apple";
	char	a = 'p';
	// char tmp[] = ft_strchr(c, a);
	printf("res = %s\n", ft_strchr(c, a));
	printf("res = %s\n", strchr(c, a));
	return (0);
}
