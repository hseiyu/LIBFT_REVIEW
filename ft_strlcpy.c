/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:08 by shata             #+#    #+#             */
/*   Updated: 2024/11/22 21:18:51 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	strlen;

	i = 0;
	strlen = 0;
	while (src[strlen] != '\0')
		strlen++;
	if (size == 0)
		return (strlen);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (strlen);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char		dest[10];
// 	const char	*src = "Hello!";
// 	size_t		len;

// 	len = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("copied string: %s\n", dest);
// 	printf("source length: %zu\n", len);
// 	return (0);
// }
