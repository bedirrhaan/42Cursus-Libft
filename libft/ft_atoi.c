/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:39:18 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/07/05 16:26:44 by bcopoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	int	loop;

	i = 0;
	sign = 1;
	result = 0;
	loop = 1;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0' || loop == 1)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		else
			loop = 0;
	}
	return (sign * result);
}
