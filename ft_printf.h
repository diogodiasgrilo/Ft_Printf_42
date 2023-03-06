/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias <ddias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:06:07 by ddias             #+#    #+#             */
/*   Updated: 2023/03/04 16:53:53 by ddias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putnbr_fd(int n, int fd, long int *counter);
void	ft_putstr_fd(char *s, int fd, long int *counter);
void	ft_putchar_fd(char c, int fd, long int *counter);
void	ft_print_unsi_base_ten(unsigned int n, int fd, long int *counter);
void	ft_print_num_hex_upper(unsigned int n, int fd, long int *counter);
void	ft_hex_printer(unsigned int n, int fd, int gate, long int *counter);
void	ft_pointer_printer(unsigned long long int n, int fd, int gate, \
			long int *counter);

#endif
