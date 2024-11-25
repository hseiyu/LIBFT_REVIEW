/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:00:22 by shata             #+#    #+#             */
/*   Updated: 2024/11/20 17:34:40 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("[a], %d\n", ft_isprint('a'));
// 	printf("[!], %d\n", ft_isprint('!'));
// 	printf("[NULL], %d\n", ft_isprint('\0'));
// }
