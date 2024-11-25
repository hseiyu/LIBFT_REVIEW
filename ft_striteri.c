/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:00 by shata             #+#    #+#             */
/*   Updated: 2024/11/23 21:44:06 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void	add_index(unsigned int i, char *c)
// {
// 	*c = *c + i;
// }

// int	main(void)
// {
// 	char	str[] = "Hello";

// 	ft_striteri(str, add_index);
// 	printf("Transformed string: %s\n", str);
// 	return (0);
// }
