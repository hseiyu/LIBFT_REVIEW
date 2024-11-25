/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:10 by shata             #+#    #+#             */
/*   Updated: 2024/11/22 21:18:42 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "Hello! World!";
// 	printf("string: %ld\n", ft_strlen(str));
// 	printf("%lu\n", strlen(str));
// 	return (0);
// }
