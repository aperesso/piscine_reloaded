/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperesso <aperesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 12:45:41 by aperesso          #+#    #+#             */
/*   Updated: 2017/03/27 16:43:02 by aperesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int			size_src;
	int			i;
	char		*string;

	size_src = ft_strlen(src);
	if (!(string = (char *)malloc(size_src + 1)))
		return (0);
	i = 0;
	while (i < size_src)
	{
		string[i] = src[i];
		i++;
	}
	string[i] = src[i];
	return (string);
}
