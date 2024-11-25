/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:00:55 by shata             #+#    #+#             */
/*   Updated: 2024/11/22 20:46:21 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*bs;

	bs = (const char *)s;
	while (*bs != '\0')
	{
		if (*bs == (char)c)
			return ((char *)bs);
		++bs;
	}
	if (*bs == (char)c)
		return ((char *)bs);
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str = "Hello, World!";
// 	char		c;
// 	char		*result;

// 	c = 'o';
// 	result = ft_strchr(str, c);
// 	if (result)
// 	{
// 		printf("Character '%c' found: %s\n", c, result);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found.\n", c);
// 	}
// 	return (0);
// }
