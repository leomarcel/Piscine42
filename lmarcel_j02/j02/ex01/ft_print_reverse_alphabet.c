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

	alphabet_ascii = 'z';
	while (alphabet_ascii != 96)
	{
		ft_putchar(alphabet_ascii);
		alphabet_ascii--;
	}
}

int	main(int argc, char const *argv[])
{
	ft_print_alphabet();
	return (0);
}
