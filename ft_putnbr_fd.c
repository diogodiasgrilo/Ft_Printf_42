/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias <ddias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:09:57 by ddias             #+#    #+#             */
/*   Updated: 2023/03/04 13:14:11 by ddias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, long int *counter)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd, counter);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd, counter);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd, counter);
	ft_putchar_fd(n % 10 + '0', fd, counter);
}
