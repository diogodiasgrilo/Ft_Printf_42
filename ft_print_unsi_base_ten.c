/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsi_base_ten.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias <ddias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:32:13 by ddias             #+#    #+#             */
/*   Updated: 2023/03/04 15:02:33 by ddias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsi_base_ten(unsigned int n, int fd, long int *counter)
{
	if (n >= 10)
		ft_print_unsi_base_ten(n / 10, fd, counter);
	ft_putchar_fd(n % 10 + '0', fd, counter);
}
