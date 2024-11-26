/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:21 by shata             #+#    #+#             */
/*   Updated: 2024/11/26 19:11:27 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	const char	*result;

	ptr = (const char *)s;
	result = NULL;
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
			result = ptr;
		++ptr;
	}
	if ((char)c == '\0')
		return ((char *)ptr);
	return ((char *)result);
}
#include <stdio.h>

int	main(void)
{
	const char	*str = "Hello, World!";
	char		c;
	char		*result;

	c = 'o';
	result = ft_strrchr(str, c);
	if (result)
		printf("Last occurrence of '%c': %s\n", c, result);
	else
		printf("Character '%c' not found.\n", c);
	return (0);
}
