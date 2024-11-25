/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:00:36 by shata             #+#    #+#             */
/*   Updated: 2024/11/22 20:18:07 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	dst[20] = "";

// 	printf("before\n");
// 	printf("dst: %s\nsrc: %s\n\n", dst, src);
// 	ft_memcpy(dst, src, 1);
// 	printf("after\n");
// 	printf("dst: %s\nsrc: %s\n\n", dst, src);
// }
