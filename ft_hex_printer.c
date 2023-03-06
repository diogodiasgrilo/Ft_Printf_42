/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias <ddias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:04:21 by ddias             #+#    #+#             */
/*   Updated: 2023/03/04 15:03:33 by ddias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_printer(unsigned int n, int fd, int gate,
		long int *counter)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (gate == 0)
	{
		write(1, "0x", 2);
		*counter += 2;
	}
	if (n >= 16)
		ft_hex_printer(n / 16, fd, ++gate, counter);
	ft_putchar_fd(hex[n % 16], fd, counter);
}
