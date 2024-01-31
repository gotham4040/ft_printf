/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thilefeb <thilefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:57:26 by thilefeb          #+#    #+#             */
/*   Updated: 2023/11/06 14:50:56 by thilefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	print_unsigned_int(unsigned int number, int *char_count)
{
	if (number <= 9)
	{
		ft_putchar_fd(number + '0', 1);
		*char_count += 1;
	}
	else
	{
		print_unsigned_int(number / 10, char_count);
		print_unsigned_int(number % 10, char_count);
	}
}

void	convert_u(int *char_count, va_list *args)
{
	unsigned int	number;

	number = va_arg(*args, unsigned int);
	print_unsigned_int(number, char_count);
}
