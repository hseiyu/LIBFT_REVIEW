/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:00:38 by shata             #+#    #+#             */
/*   Updated: 2024/11/22 21:18:49 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*copy_with_overlap(unsigned char *d, const unsigned char *s,
		size_t n)
{
	size_t	i;

	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (0 < i)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	copy_with_overlap(d, s, n);
	return (dest);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "Hello, world!";

// 	ft_memmove(str + 7, str, 6);
// 	printf("%s\n", str);
// 	return (0);
// }
