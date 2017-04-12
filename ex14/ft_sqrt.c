/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperesso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 18:46:14 by aperesso          #+#    #+#             */
/*   Updated: 2017/03/13 18:46:17 by aperesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_perfect_square(int nb)
{
	int i;
	int sum;
	int count;

	i = 1;
	count = 1;
	sum = 1;
	while (sum < nb)
	{
		i = i + 2;
		sum += i;
		count += 1;
	}
	if (count * count == nb)
	{
		return (count);
	}
	else
	{
		return (0);
	}
}

int		ft_sqrt(int nb)
{
	int sqrt;

	if (nb <= 0)
	{
		return (0);
	}
	else
	{
		sqrt = ft_perfect_square(nb);
		return (sqrt);
	}
}
