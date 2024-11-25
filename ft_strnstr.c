/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:18 by shata             #+#    #+#             */
/*   Updated: 2024/11/21 21:15:14 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	f;
	size_t	s;

	f = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[f] != '\0' && f < len)
	{
		s = 0;
		while ((f + s) < len && big[f + s] == little[s] && little[s] != '\0')
			s++;
		if (little[s] == '\0')
			return ((char *)&big[f]);
		f++;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char big[] = "Hello, World!";
// 	char little[] = "World";
// 	char *result;

// 	result = ft_strnstr(big, little, 15); // len を指定して検索
// 	if (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("Not found\n");

// 	return (0);
// }
