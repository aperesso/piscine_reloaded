/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperesso <aperesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 16:20:44 by aperesso          #+#    #+#             */
/*   Updated: 2017/03/29 21:00:46 by aperesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int		main(int ac, char **av)
{
	int		op;
	int		rd;
	char	buf[5001];

	if (ac == 1)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		op = open(av[1], O_RDONLY);
		if (op < 0)
			return (0);
		else
		{
			rd = read(op, buf, 5000);
			buf[5000] = '\0';
			ft_putstr(buf);
		}
		close(op);
	}
	return (0);
}
