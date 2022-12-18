/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:37:44 by lcoissar          #+#    #+#             */
/*   Updated: 2022/12/18 02:05:59 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"

static int	itoa_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n && ++len)
		n = n / 10;
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	unsigned int	n2;
	char			*str;

	len = itoa_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		n2 = -n;
	else
		n2 = n;
	while (--len >= 0)
	{
		if (n < 0 && len == 0)
			str[0] = '-';
		else
			str[len] = n2 % 10 + '0';
		n2 = n2 / 10;
	}
	return (str);
}
