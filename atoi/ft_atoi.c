/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:48:27 by lmarcel           #+#    #+#             */
/*   Updated: 2016/07/13 11:37:24 by lmarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_atoi(char *str)
{
	int	i;
	int	len;
	int	nb;
	int	mult;
	int	neg;

	i = 0;
	len = 0;
	nb = 0;
	mult = 1;
	neg = 0;
	while (str[len] != '\0')
		len++;
	i = len - 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb += (str[i] - 48) * mult;
		if (str[i] == '-')
			neg = 1;
		mult *= 10;
		len--;
		i--;
	}
	return (neg ? -nb : nb);
}

() ? valeur : valeur; 
*/
int	ft_atoi_demo(char *str)
{
	int i;
	int neg;
	int number;

	i = 0;
	neg = 0;
	number = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == 45)
		neg = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += (int)str[i] - 48;
		i++;
	}
	return((neg) ? -number : number);
}





int main(int ac, char **av)
{
	printf("fonction originale =>%i\n",atoi(av[1]));
	printf("\033[31mta fonction atoi =>%i\n",ft_atoi_demo(av[1]));
	return (0);

}
