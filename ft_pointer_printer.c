/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_printer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias <ddias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:04:57 by ddias             #+#    #+#             */
/*   Updated: 2023/03/04 15:06:24 by ddias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer_printer(unsigned long long int n, int fd, int gate,
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
		ft_pointer_printer(n / 16, fd, ++gate, counter);
	ft_putchar_fd(hex[n % 16], fd, counter);
}
