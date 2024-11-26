/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:26 by shata             #+#    #+#             */
/*   Updated: 2024/11/26 20:35:54 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/
char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	size_t	src_len;
	size_t	substr_len;
	char	*result;

	if (src == NULL)
		return (NULL);
	src_len = ft_strlen(src);
	//ｓｒｃが短かった場合
	if (start > src_len)
	{
		return (NULL);
		// result = (char *)malloc(sizeof(char));
		// if (result == NULL)
		// 	return (NULL);
		// result[0] = '\0';
		// return (result);
	}
	if (start + len > src_len) //
		substr_len = src_len - start;
	else
		substr_len = len;
	result = (char *)malloc((substr_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, (char *)(src + start), substr_len + 1);
	result[substr_len] = '\0';
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char	*substr;

	substr = ft_substr("Hello, world!", 7, 30);
	printf("%s\n", substr);
	free(substr);
	return (0);
}
