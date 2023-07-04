/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bcopoglu <Bcopoglu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:45:32 by Bcopoglu          #+#    #+#             */
/*   Updated: 2023/07/04 11:57:39 by Bcopoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	unsigned char	d;
	size_t			i;

	a = (unsigned char *)b;
	d = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		a[i] = d;
		i++;
	}
	return (b);
}
