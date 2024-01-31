/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thilefeb <thilefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:13:30 by thilefeb          #+#    #+#             */
/*   Updated: 2023/11/08 19:09:34 by thilefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_output(char c, int *char_count)
{
	write(1, &c, 1);
	*char_count += 1;
}

void	process_format(const char *format, va_list *args, int *char_count)
{
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			if (*format == '\0')
				break ;
			else if (*format == '%')
			{
				handle_output('%', char_count);
			}
			else
			{
				handle_conversions(*format, char_count, args);
			}
		}
		else
		{
			handle_output(*format, char_count);
		}
		++format;
	}
}

void	handle_conversions(char c, int *char_count, va_list *args)
{
	if (c == 'd' || c == 'i')
		convert_d_and_i(char_count, args);
	else if (c == 'c')
		convert_c(char_count, args);
	else if (c == 's')
		convert_s(char_count, args);
	else if (c == 'p')
		convert_p(char_count, args);
	else if (c == 'u')
		convert_u(char_count, args);
	else if (c == 'x')
		convert_x(char_count, args);
	else if (c == 'X')
		convert_maj_x(char_count, args);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		char_count;

	if (!format)
		return (-1);
	va_start(args, format);
	char_count = 0;
	process_format(format, &args, &char_count);
	va_end(args);
	return (char_count);
}
