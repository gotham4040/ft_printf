/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_d_and_i.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thilefeb <thilefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:11:31 by thilefeb          #+#    #+#             */
/*   Updated: 2023/11/07 16:18:51 by thilefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	convert_d_and_i(int *char_count, va_list *args)
{
	int		num;
	char	*char_num;

	num = va_arg(*args, int);
	char_num = ft_itoa(num);
	ft_putstr_fd(char_num, 1);
	*char_count += ft_strlen(char_num);
	free(char_num);
}
