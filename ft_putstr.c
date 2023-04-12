/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:28:33 by diogpere          #+#    #+#             */
/*   Updated: 2023/04/12 10:31:16 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, long int *counter)
{
	int	i;

	i = -1;
	if (!s)
	{
		ft_putstr("(null)", counter);
		return ;
	}
	while (s[++i])
		ft_putchar(s[i], counter);
}
