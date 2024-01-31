/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thilefeb <thilefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:17:27 by thilefeb          #+#    #+#             */
/*   Updated: 2023/11/07 14:08:22 by thilefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_put_nbr(unsigned int num)
{
	if (num >= 16)
	{
		ft_put_nbr(num / 16);
		ft_put_nbr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

static int	ft_nbr_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	convert_x(int *char_count, va_list *args)
{
	int	number;

	number = va_arg(*args, unsigned long long);
	if (number == 0)
	{
		ft_putchar_fd('0', 1);
		*char_count += 1;
	}
	else
	{
		ft_put_nbr(number);
		*char_count += ft_nbr_len(number);
	}
}
