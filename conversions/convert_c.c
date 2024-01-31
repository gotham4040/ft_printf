/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thilefeb <thilefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:47:27 by thilefeb          #+#    #+#             */
/*   Updated: 2023/11/07 11:29:13 by thilefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	convert_c(int *char_count, va_list *args)
{
	char	car;

	car = va_arg(*args, int);
	ft_putchar_fd(car, 1);
	*char_count += 1;
}
