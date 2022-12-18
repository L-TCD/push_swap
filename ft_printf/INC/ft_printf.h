/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 06:03:51 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/18 07:06:38 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);

int		char_format(char c);
int		string_format(char *str);
int		pointer_format(void *ptr);
int		digit_format(int digit);
int		unsigned_format(unsigned int ul);
int		hexa_format(unsigned int hexa);
int		upper_hexa_format(unsigned int hexa);
int		percent_format(void);
int		ft_strlen(const char *str);

char	*itoa_base(unsigned long long num, char *base);
char	*ft_itoa(int n);
char	*ft_strdup(const char *str);

void	ft_bzero(void *ptr, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

void	*ft_calloc(size_t count, size_t size);

#endif
