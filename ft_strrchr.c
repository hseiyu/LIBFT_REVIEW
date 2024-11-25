/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:21 by shata             #+#    #+#             */
/*   Updated: 2024/11/21 17:37:00 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*bs;
	const char	*ss;

	bs = (const char *)s;
	ss = NULL;
	while (*bs != '\0')
	{
		if (*bs == (char)c)
			ss = bs;
		++bs;
	}
	if ((char)c == '\0')
		return ((char *)bs);
	return ((char *)ss);
}
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str = "Hello, World!";
// 	char		c;
// 	char		*result;

// 	c = 'o';
// 	result = ft_strrchr(str, c);
// 	if (result)
// 		printf("Last occurrence of '%c': %s\n", c, result);
// 	else
// 		printf("Character '%c' not found.\n", c);
// 	return (0);
// }
