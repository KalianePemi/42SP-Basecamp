/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapereir <kapereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:26:05 by kapereir          #+#    #+#             */
/*   Updated: 2021/04/09 21:15:17 by kapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char mostre_numeros;

	mostre_numeros = '0';
	while (mostre_numeros <= '9')
	{
		write(1, &mostre_numeros, 1);
		mostre_numeros++;
	}
}
