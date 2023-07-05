/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 23:47:53 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/07/06 00:07:46 by bcopoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	trimmed_len;
	char	*trimmed_str;
	size_t	i;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	trimmed_len = end - start + 1;
	trimmed_str = malloc((trimmed_len + 1) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while (i < trimmed_len)
	{
		trimmed_str[i] = s1[start + i];
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
