/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:00:28 by shata             #+#    #+#             */
/*   Updated: 2024/11/21 19:18:50 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = (const unsigned char *)b;
	while (i < len)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*data = "Hello, World!";
// 	char		*result;

// 	result = (char *)ft_memchr(data, 'W', 13);
// 	if (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("Not found\n");
// 	return (0);
// }
