/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:04:03 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/07/09 14:04:03 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_counter(const char *str, char c)
{
	int	i;
	int	num_words;

	i = 0;
	num_words = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			num_words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (num_words);
}

static int	ft_word_len(char const *str, char c, int i)
{
	int	len;

	len = 0;
	while (str[i] == c && str[i] != '\0')
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char	**ft_free(char **str_arr, int w_index)
{
	while (w_index >= 0)
	{
		free(str_arr[w_index]);
		w_index--;
	}
	free(str_arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	size_t	i;
	int		w_index;
	int		char_index;

	i = 0;
	w_index = -1;
	char_index = 0;
	str_arr = (char **)malloc((ft_word_counter(s, c) + 1) * sizeof(char *));
	if (!str_arr)
		return (NULL);
	while (++w_index < ft_word_counter(s, c))
	{
		char_index = 0;
		str_arr[w_index] = malloc((ft_word_len(s, c, i) + 1) * sizeof(char));
		if (!str_arr[w_index])
			return (ft_free(str_arr, w_index - 1));
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
			str_arr[w_index][char_index++] = s[i++];
		str_arr[w_index][char_index] = '\0';
	}
	str_arr[w_index++] = NULL;
	return (str_arr);
}
