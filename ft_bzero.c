/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:59:37 by shata             #+#    #+#             */
/*   Updated: 2024/11/20 19:36:20 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			t;

	p = (unsigned char *)s;
	t = 0;
	while (t < n)
	{
		p[t] = '\0';
		t++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	size_t	n;
// 	void	*result;

// 	n = 10;
// 	result = malloc(n);
// 	ft_bzero(result, n);
// 	printf("[Address]\n%p\n", result);
// 	free(result);
// }
