/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shata <shata@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:00:52 by shata             #+#    #+#             */
/*   Updated: 2024/11/25 20:12:03 by shata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char delimiter)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != delimiter && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == delimiter)
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*get_next_word(const char **str, char delimiter)
{
	const char	*start;

	start = *str;
	while (**str && **str != delimiter)
		(*str)++;
	return (ft_substr(start, 0, *str - start));
}

static void	allocate_result(char ***result, int word_count)
{
	*result = (char **)ft_calloc(word_count + 1, sizeof(char *));
}

static int	process_words(const char **s, char c, char **result)
{
	int	i;

	i = 0;
	while (**s)
	{
		if (**s != c)
		{
			result[i] = get_next_word(s, c);
			if (!result[i])
				return (i);
			i++;
		}
		else
			(*s)++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	int		word_count;
	char	**result;
	int		p_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	allocate_result(&result, word_count);
	if (!result)
		return (NULL);
	p_count = process_words(&s, c, result);
	if (word_count != p_count)
	{
		while (word_count > 0)
			free(result[--word_count]);
		free(result);
		return (NULL);
	}
	return (result);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	**result;

// 	result = ft_split("Hello World, this is a test.", ' ');
// 	for (int i = 0; result[i] != NULL; i++)
// 	{
// 		printf("Word %d: %s\n", i + 1, result[i]);
// 		free(result[i]);
// 	}
// 	free(result);
// 	return (0);
// }
