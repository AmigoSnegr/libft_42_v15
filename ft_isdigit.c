/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:41:50 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/12 19:41:51 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return (ch - 48);
    }
    else
        return 0;
}

// int main(void)
// {
//     char    c = '5';
//     int     res = ft_isdigit(c);

//     printf("res = %d", res);
//     return 0;
// }