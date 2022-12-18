/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper_hexa_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 07:07:26 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/18 09:44:45 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"

int	upper_hexa_format(unsigned int hexa)
{
	char	*str;
	int		count;

	str = itoa_base(hexa, "0123456789ABCDEF");
	count = string_format(str);
	free(str);
	return (count);
}
