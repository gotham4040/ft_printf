/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thilefeb <thilefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:19:56 by thilefeb          #+#    #+#             */
/*   Updated: 2023/11/07 11:27:52 by thilefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	convert_s(int *char_count, va_list *args)
{
	char	*s;

	s = va_arg(*args, char *);
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		*char_count += 6;
	}
	else
	{
		ft_putstr_fd(s, 1);
		*char_count += ft_strlen(s);
	}
}
