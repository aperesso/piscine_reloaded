/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperesso <aperesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 14:13:53 by aperesso          #+#    #+#             */
/*   Updated: 2017/03/27 16:55:37 by aperesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *tab;
	int i;
	int j;

	if (min >= max)
		return (0);
	size = max - min;
	if (!(tab = malloc(size * sizeof(int))))
		return (0);
	i = min;
	j = 0;
	while (i < max)
	{
		tab[j] = i;
		j++;
		i++;
	}
	return (tab);
}
