/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bigbro <bigbro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 22:46:57 by bigbro            #+#    #+#             */
/*   Updated: 2026/10/29 23:00:26 by bigbro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_print_comb2(int x, int y)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = (x / 10) + '0';
	b = (x % 10) + '0';
	c = (y / 10) + '0';
	d = (y % 10) + '0';
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (x != 98 || y != 99)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_display_print_comb2 (x, y);
			y++;
		}
		x++;
	}
}
