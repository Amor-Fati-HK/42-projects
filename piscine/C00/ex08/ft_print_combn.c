/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bigbro <bigbro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 23:27:03 by bigbro            #+#    #+#             */
/*   Updated: 2026/11/21 00:44:23 by bigbro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive_combn(int n, int i, char *tab)
{
	char c;

	if (i == n)
	{
		write(1, tab, n);
		if (tab[0] != '0' + (10 - n))
			write(1, ", ", 2);

		return ;
	}

	if (i == 0)
		c = '0';
	else
		c = tab[i - 1] +1;	
	
	while(c <= '9'- (n - 1 - i))
	{
		tab[i] = c;
		ft_recursive_combn(n, i + 1, tab);
		c++;
	}
}

void	ft_print_combn(int n)
{
	char	tab[10];
	int		i;

	i = 0;

	if ( n > 0 && n < 10)
		ft_recursive_combn(n, i, tab);
}
