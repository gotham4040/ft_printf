/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thilefeb <thilefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:15:46 by thilefeb          #+#    #+#             */
/*   Updated: 2023/11/07 13:00:03 by thilefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <inttypes.h>

int		ft_printf(const char *format, ...);
void	handle_conversions(char c, int *char_count, va_list *args);
void	convert_d_and_i(int *char_count, va_list *args);
void	convert_c(int *char_count, va_list *args);
void	convert_s(int *char_count, va_list *args);
void	convert_p(int *char_count, va_list *args);
void	convert_u(int *char_count, va_list *args);
void	convert_x(int *char_count, va_list *args);
void	convert_maj_x(int *char_count, va_list *args);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa(int n);

#endif