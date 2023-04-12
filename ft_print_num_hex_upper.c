/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num_hex_upper.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:27:55 by diogpere          #+#    #+#             */
/*   Updated: 2023/04/12 10:30:35 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_num_hex_upper(unsigned int n, long int *counter)
{
	if (n >= 16)
		ft_print_num_hex_upper(n / 16, counter);
	if (n % 16 < 10)
		ft_putchar(n % 16 + '0', counter);
	else
		ft_putchar(n % 16 + 'A' - 10, counter);
}
