/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 07:02:31 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/18 07:44:35 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"
#include <stdio.h>

int	pointer_format(void *ptr)
{
	char	*str;
	int		count;

	if (ptr == 0)
	{
		count = string_format("(nil)");
		return (count);
	}
	string_format("0x");
	count = 2;
	str = itoa_base((unsigned long long)ptr, "0123456789abcdef");
	count += string_format(str);
	free(str);
	return (count);
}
