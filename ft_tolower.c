/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:29 by shata             #+#    #+#             */
/*   Updated: 2024/11/20 20:45:25 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("[B], %c\n", ft_tolower('B'));
// 	printf("[a], %c\n", ft_tolower('a'));
// }
