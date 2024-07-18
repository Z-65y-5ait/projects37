/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:25:20 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/16 22:24:34 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;

	i = 0;
	if (min >= max)
		return (NULL);
	str = (int *)malloc(sizeof(*str) * (max - min));
	if (!str)
		return (NULL);
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
