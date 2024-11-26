/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:59:27 by shata             #+#    #+#             */
/*   Updated: 2024/11/26 19:22:02 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	consideration_overflow(char *str, int sign)
{
	unsigned long	result;
	unsigned long	over;
	int				digit;

	result = 0;
	digit = 0;
	over = (unsigned long)LONG_MAX;
	while ('0' <= *str && *str <= '9')
	{
		digit = *str - '0';
		if (sign == 1 && result > LONG_MAX)
			return (LONG_MAX);
		if (0 < result && sign == -1 && result > (over - digit + 1) / 10)
			return (LONG_MIN);
		result = result * 10 + digit;
		str++;
	}
	return (result);
}

/*

*/

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (((9 <= *str && *str <= 13) || *str == 32) && *str != '\0')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	result = (int)consideration_overflow((char *)str, sign);
	return (result * sign);
}
// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		printf("ft_atoi: %d\n", ft_atoi(argv[1]));
// 		printf("atoi: %d\n", atoi(argv[1]));
// 	}
// 	return (0);
// }
