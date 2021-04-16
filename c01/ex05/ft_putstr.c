/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapereir <kapereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:50:36 by kapereir          #+#    #+#             */
/*   Updated: 2021/04/14 15:32:29 by kapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int contador;
				   
	contador = 0; 
	while (str[contador] != '\0')
	{
		write(1, &str[contador], 1);
		contador++;
	}
}
