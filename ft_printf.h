/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:28:13 by diogpere          #+#    #+#             */
/*   Updated: 2023/04/12 10:29:27 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putnbr(int n, long int *counter);
void	ft_putstr(char *s, long int *counter);
void	ft_putchar(char c, long int *counter);
void	ft_print_unsi_base_ten(unsigned int n, long int *counter);
void	ft_print_num_hex_upper(unsigned int n, long int *counter);
void	ft_hex_printer(unsigned int n, int gate, long int *counter);
void	ft_pointer_printer(unsigned long long int n, int gate, \
			long int *counter);

#endif
