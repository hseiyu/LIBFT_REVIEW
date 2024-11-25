/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:00:57 by shata             #+#    #+#             */
/*   Updated: 2024/11/21 19:27:05 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	return (ft_substr(s, 0, ft_strlen(s)));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;
// 	char	*dest;

// 	src = "Hello, World!";
// 	dest = ft_strdup(src);
// 	printf("copied value: %s\n", dest);
// }
