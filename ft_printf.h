/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:28:13 by diogpere          #+#    #+#             */
/*   Updated: 2023/04/12 12:41:43 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define HEX_UPPER "0123456789ABCDEF"
# define HEX_LOWER "0123456789abcdef"

int		ft_printf(const char *str, ...);
void	ft_putstr(char *s, long int *counter);
void	ft_putchar(char c, long int *counter);
void	ft_putnbr(long int n, long int *counter);
void	ft_hex_printer(unsigned long long int n, int gate,
			long int *counter, int up_down);

#endif
