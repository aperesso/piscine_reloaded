/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperesso <aperesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 21:01:20 by aperesso          #+#    #+#             */
/*   Updated: 2017/04/12 14:07:41 by aperesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*tmp;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			while (i + 1 < argc)
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					tmp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = tmp;
				}
				ft_putstr(argv[i]);
				ft_putchar('\n');
				i++;
			}
		}
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
}
