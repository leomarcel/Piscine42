/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 10:29:55 by lmarcel           #+#    #+#             */
/*   Updated: 2016/07/07 14:03:45 by lmarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c)

void	ft_print_numbers(void)
{
	int numbers_ascii;

	numbers_ascii = '0';
	while (numbers_ascii != 58)
	{
		ft_putchar(numbers_ascii);
		numbers_ascii++;
	}
}
