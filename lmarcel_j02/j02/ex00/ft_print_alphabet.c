/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 10:29:55 by lmarcel           #+#    #+#             */
/*   Updated: 2016/07/07 07:04:14 by lmarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c)

void	ft_print_alphabet(void)
{
	char alphabet_ascii;

	alphabet_ascii = 'a';
	while (alphabet_ascii != 123)
	{
		ft_putchar(alphabet_ascii);
		alphabet_ascii++;
	}
}
