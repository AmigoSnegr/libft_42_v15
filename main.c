/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbizjano <dbizjano@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:42:08 by dbizjano          #+#    #+#             */
/*   Updated: 2022/12/19 14:42:58 by dbizjano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

// int	main(void)
// {
// 	 char src[] = "Append this :)";
//     char dest[20] = "To this";
//     unsigned int i =0, j = 0;
//     unsigned int size = 20;
//     while (src[i] != '\0') i++;
//     while (dest[j] != '\0') j++;
//     write(1,dest, size);
//     printf("The necessary size should be %d\n", i+j+1);
//     printf("I will give it %d places to copy too\n", size);
//     printf("The new string length is %ld\n", ft_strlcat(dest,src,size));
// 	return (0);
// }

int main() {
  char  *str1 = "";
  char  *str2 = "AAAAAA";
  printf("%d\n", ft_strncmp(str1, str2, 1));
  return 0;
}