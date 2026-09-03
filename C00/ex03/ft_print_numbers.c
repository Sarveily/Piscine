/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:40:00 by gabriel            #+#    #+#            */
/*   Updated: 2026/09/03 17:45:14 by sarve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	nombre;

	nombre = '0';
	while (nombre <= '9')
	{
		write(1, &nombre, 1);
		nombre++;
	}
}
