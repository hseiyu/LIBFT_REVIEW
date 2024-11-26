/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:18 by shata             #+#    #+#             */
/*   Updated: 2024/11/26 19:25:51 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_index;
	size_t	little_index;

	big_index = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[big_index] != '\0' && big_index < len)
	{
		little_index = 0;
		while ((big_index + little_index) < len && big[big_index
			+ little_index] == little[little_index]
			&& little[little_index] != '\0')
			little_index++;
		if (little[little_index] == '\0')
			return ((char *)&big[big_index]);
		big_index++;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char big[] = "Hello, World!";
// 	char little[] = "World";
// 	char *result;

// 	result = big_it_strnstr(big, little, 15); // len を指定して検索
// 	ibig_i (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("Not found\n");

// 	return (0);
// }
