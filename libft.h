/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:41:59 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/14 19:20:35 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isdigit(int ch);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strnstr(const char	*big, const char *little, size_t len);
void	*ft_memchr(const void *str, int c, size_t n);

#endif