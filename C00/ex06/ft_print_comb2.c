/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarveily <sarveily@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 07:00:00 by sarveily          ###   ########.fr       */
/*   Updated: 2026/09/04 13:18:18 by sarve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write(1, &(char){a / 10 + '0'}, 1);
			write(1, &(char){a % 10 + '0'}, 1);
			write(1, " ", 1);
			write(1, &(char){b / 10 + '0'}, 1);
			write(1, &(char){b % 10 + '0'}, 1);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
