/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num_hex_upper.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias <ddias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:38:23 by ddias             #+#    #+#             */
/*   Updated: 2023/03/04 15:03:29 by ddias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_num_hex_upper(unsigned int n, int fd, long int *counter)
{
	if (n >= 16)
		ft_print_num_hex_upper(n / 16, fd, counter);
	if (n % 16 < 10)
		ft_putchar_fd(n % 16 + '0', fd, counter);
	else
		ft_putchar_fd(n % 16 + 'A' - 10, fd, counter);
}
