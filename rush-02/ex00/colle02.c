/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 19:15:34 by lmarcel           #+#    #+#             */
/*   Updated: 2016/07/24 14:51:45 by lmarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_line(int size, char c_begin, char c_middle, char c_end)
{
	ft_putchar(c_begin);
	while ((size - 1) > 1)
	{
		ft_putchar(c_middle);
		size--;
	}
	if (size > 1)
	{
		ft_putchar(c_end);
	}
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_line(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			ft_print_line(x, '|', ' ', '|');
			y--;
		}
		if (y > 0)
		{
			ft_print_line(x, 'o', '-', 'o');
		}
	}
}

int	main(void)
{
	colle(5, 3);
	return (0);
}
