/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:43:49 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/13 12:07:57 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int ft_atoi(const char *str)
{
    int result;
    int minus;
    int current;
    int next;
    size_t i;
    
    i = 0;
    result = 0;
    minus = 0;
    while (str[i] != 0)
    {
        if (i != (ft_strlen(str) - 1))
            next = ft_isdigit(str[i + 1]);
        current = ft_isdigit(str[i]);
        if (current != 0)
        {
            if (str[i - 1] == '-')
                minus = 1;
            result = result * 10 + str[i] - 48;
            if (result == 214748364 && minus == 1 && str[i + 1] == '8')
                return (-2147483648);
            if (next == 0)
                break;
        }
        i++;
    }
    if (minus == 1)
        return (-result);
    return (result);
}