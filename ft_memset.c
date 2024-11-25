/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:00:40 by shata             #+#    #+#             */
/*   Updated: 2024/11/20 18:20:03 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*bs;

	bs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		bs[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	size_t len = 13;
// 	ft_memset(str, '\0', len);
// 	printf("after memset: %s", str);
// }
