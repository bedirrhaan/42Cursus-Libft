/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:27:23 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/07/06 14:37:27 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	unsigned char	*d;
	size_t			i;

	a = (unsigned char *)b;
	d = (unsigned char *)c;
	i = 0;
	while (i < len)
	{
		a[i] = d;
		i++;
	}
	return (b);
}
