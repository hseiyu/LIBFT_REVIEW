/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:00:25 by shata             #+#    #+#             */
/*   Updated: 2024/11/23 21:40:49 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pow(int x, int y)
{
	int	result;

	result = 1;
	while (0 < y)
	{
		result *= x;
		y--;
	}
	return (result);
}

static char	*check_zero(char *result, long nbuf)
{
	if (0 == nbuf)
	{
		result[0] = '0';
		result[1] = '\0';
	}
	return (result);
}

static char	*return_str(char *result, long nbuf, int len, int flag)
{
	int		i;
	int		div;
	long	latest;

	i = 0;
	div = ft_pow(10, (len - 1));
	if (flag < 0)
	{
		result[0] = '-';
		len++;
		i++;
	}
	if (0 == nbuf)
		check_zero(result, nbuf);
	while (i < len)
	{
		latest = (long)(nbuf / div);
		nbuf = nbuf - latest * div;
		result[i] = '0' + latest;
		div /= 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nbuf;
	long	temp;
	int		flag;
	char	*result;

	nbuf = (long)n;
	len = 0;
	flag = 0;
	if (nbuf <= 0)
	{
		flag = -1;
		nbuf = -nbuf;
	}
	temp = nbuf;
	while (0 < temp)
	{
		len++;
		temp /= 10;
	}
	result = (char *)malloc(len + 1 + flag * -1);
	if (result == NULL)
		return (NULL);
	return_str(result, nbuf, len, flag);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		n;
// 	char	*str;

// 	n = -12345;
// 	str = ft_itoa(n);
// 	printf("The integer %d as a string: %s\n", n, str);
// 	free(str);
// 	return (0);
// }
