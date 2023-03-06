/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias <ddias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:08:09 by ddias             #+#    #+#             */
/*   Updated: 2023/03/04 13:36:40 by ddias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, long int *counter)
{
	if (!s)
	{
		ft_putstr_fd("(null)", fd, counter);
		return ;
	}
	while (*s)
		ft_putchar_fd(*s++, fd, counter);
}
