/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:59:52 by shata             #+#    #+#             */
/*   Updated: 2024/11/26 19:36:34 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size == 0 || count == 0)
		return (NULL);
	if (count <= __SIZE_MAX__ / size)
		return (NULL);
	if ((0 == size || 0 == count) || (count <= __SIZE_MAX__ / size))
	{
		ptr = malloc(count * size);
		if (ptr != NULL)
		{
			ft_bzero(ptr, count * size);
			return (ptr);
		}
		else
			return (NULL);
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr;

// 	arr = (int *)ft_calloc(5, sizeof(int));
// 	if (arr)
// 	{
// 		for (int i = 0; i < 5; i++)
// 			printf("arr[%d] = %d\n", i, arr[i]);
// 		free(arr);
// 	}
// 	return (0);
// }
