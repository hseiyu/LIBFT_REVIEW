/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:00:43 by shata             #+#    #+#             */
/*   Updated: 2024/11/22 22:34:47 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int	main(void)
// {
// 	char	c;

// 	c = 'j';
// 	ft_putchar_fd(c, STDOUT_FILENO);
// }
