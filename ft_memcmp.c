/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:00:32 by shata             #+#    #+#             */
/*   Updated: 2024/11/22 21:24:19 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*b1;
	const unsigned char	*b2;

	b1 = (const unsigned char *)s1;
	b2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	p1[] = "abcdfef1133";
// 	char	p2[] = "abcdee11";

// 	printf("[result]\n%d", ft_memcmp(p1, p2, 5));
// }
