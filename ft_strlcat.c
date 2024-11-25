/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:05 by shata             #+#    #+#             */
/*   Updated: 2024/11/21 14:29:33 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	int		i;

	destlen = 0;
	while (dest[destlen] != '\0' && destlen < size)
		destlen++;
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (srclen + size);
	i = 0;
	while (src[i] != '\0' && destlen + i < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[20] = "Hello, ";
// 	char	src[] = "World!";
// 	size_t	result;

// 	result = ft_strlcat(dest, src, sizeof(dest));
// 	printf("after combine: %s\n", dest);
// 	printf("length: %zu\n", result);
// 	return (0);
// }
