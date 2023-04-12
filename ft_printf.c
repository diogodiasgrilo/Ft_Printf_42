/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:28:04 by diogpere          #+#    #+#             */
/*   Updated: 2023/04/12 10:29:54 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_helper(char *str, va_list ap, int i, long int *counter)
{
	if (str[i] == 'c')
		ft_putchar(va_arg(ap, int), counter);
	else if (str[i] == 's')
		ft_putstr(va_arg(ap, char *), counter);
	else if (str[i] == 'p')
		ft_pointer_printer(va_arg(ap, unsigned long long int), 0, counter);
	else if (str[i] == 'd')
		ft_putnbr(va_arg(ap, int), counter);
	else if (str[i] == 'i')
		ft_putnbr(va_arg(ap, int), counter);
	else if (str[i] == 'u')
		ft_print_unsi_base_ten(va_arg(ap, unsigned int), counter);
	else if (str[i] == 'x')
		ft_hex_printer(va_arg(ap, unsigned int), 1, counter);
	else if (str[i] == 'X')
		ft_print_num_hex_upper(va_arg(ap, unsigned int), counter);
	else if (str[i] == '%')
		ft_putchar('%', counter);
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	long int	i;
	long int	counter;

	i = 0;
	counter = 0;
	va_start(ap, str);
	if (!*str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			ft_print_helper((char *)str, ap, ++i, &counter);
		else
			ft_putchar(str[i], &counter);
		i++;
	}
	va_end(ap);
	return (counter);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Hello world";
// 	ft_printf(": %d", ft_printf(" %ld", -2147483648));
// 	printf("\n");
// 	printf(": %d", printf(" %ld", -2147483648));
// 	printf("\n");
// }
