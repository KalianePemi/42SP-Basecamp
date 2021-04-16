/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapereir <kapereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:26:30 by kapereir          #+#    #+#             */
/*   Updated: 2021/04/09 21:24:24 by kapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comma(char c, char d, char u)
{
	if (!(c == '7' && d == '8' && u == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char centena;
	char dezena;
	char unidade;

	centena = '0';
	while (centena <= '7')
	{
		dezena = centena + 1;
		while (dezena <= '8')
		{
			unidade = dezena + 1;
			while (unidade <= '9')
			{
				ft_print_numbers(centena, dezena, unidade);
				ft_print_comma(centena, dezena, unidade);
				unidade++;
			}
			dezena++;
		}
		centena++;
	}
}
