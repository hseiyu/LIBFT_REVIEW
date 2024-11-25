/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:12 by shata             #+#    #+#             */
/*   Updated: 2024/11/23 21:42:36 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <stdio.h>

// char	add_index(unsigned int i, char c)
// {
// 	return (c + i);
// }

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strmapi("Hello", add_index);
// 	printf("Transformed string: %s\n", str);
// 	free(str);
// 	return (0);
// }
