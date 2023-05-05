/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:27:44 by diogpere          #+#    #+#             */
/*   Updated: 2023/04/12 12:29:42 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_printer(unsigned long long int n, int gate,
		long int *counter, int up_down)
{
	if (!n && gate == 0)
	{
		ft_putstr("(nil)", counter);
		return ;
	}	
	if (gate == 0)
	{
		write(1, "0x", 2);
		*counter += 2;
	}
	if (n >= 16)
		ft_hex_printer(n / 16, ++gate, counter, up_down);
	if (up_down)
		ft_putchar(HEX_UPPER[n % 16], counter);
	else
		ft_putchar(HEX_LOWER[n % 16], counter);
}
