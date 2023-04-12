/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsi_base_ten.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:28:00 by diogpere          #+#    #+#             */
/*   Updated: 2023/04/12 10:30:43 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsi_base_ten(unsigned int n, long int *counter)
{
	if (n >= 10)
		ft_print_unsi_base_ten(n / 10, counter);
	ft_putchar(n % 10 + '0', counter);
}
