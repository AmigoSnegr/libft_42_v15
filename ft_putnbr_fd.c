/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:19:52 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/22 20:48:15 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	c = n % 10 + 48;
	if (n > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, &c, 1);
	}
	else if (n == 0)
	{
		write(fd, "0", 1);
	}
	else if (n < 0)
	{
		ft_putnbr_fd(-n / 10, fd);
		write(fd, &c, 1);
		write(fd, "-", 1);
	}	
}
