/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:28:22 by diogpere          #+#    #+#             */
/*   Updated: 2023/04/12 12:41:23 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long int n, long int *counter)
{
	if (n < 0)
	{
		ft_putchar('-', counter);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10, counter);
	ft_putchar(n % 10 + '0', counter);
}
