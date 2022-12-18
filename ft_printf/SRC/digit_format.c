/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:53:52 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/17 10:54:59 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"

int	digit_format(int digit)
{
	char	*str;
	int		len;

	str = ft_itoa(digit);
	len = string_format(str);
	free(str);
	return (len);
}
