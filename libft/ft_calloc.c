/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:33:02 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/07/05 16:49:46 by bcopoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t				total_size;
	void				*s;
	unsigned char		*byte_s;
	size_t				i;

	total_size = count * size;
	s = malloc(total_size);
	if (s != NULL)
	{
		byte_s = (unsigned char *)s;
		i = 0;
		while (i < total_size)
		{
			byte_s[i] = 0;
			i++;
		}
	}
	return (s);
}
