/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:08:38 by lcoissar          #+#    #+#             */
/*   Updated: 2022/12/18 03:09:22 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/push_swap.h"

void	printf_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		ft_printf("%d\n", tab[i]);
}

int	*get_int_array_from_string(char *str, char separator, int *size)
{
	char	**tab2;
	int		*tab;
	int		j;

	tab2 = ft_split(str, separator);
	if (!tab2)
		exit(1);
	*size = 0;
	while (tab2[*size])
		*size = *size + 1;
	tab = malloc(sizeof(int) * (*size));
	if (!tab)
		exit(1);
	j = -1;
	while (++j < *size)
	{
		tab[j] = ft_atoi(tab2[j]);
		free(tab2[j]);
	}
	free(tab2);
	return (tab);
}

int	main(int ac, char **av)
{
	int	*tab;
	int	i;
	int	size;

	size = 0;
	if (ac == 1)
		return (0);
	if (ac == 2)
		tab = get_int_array_from_string(av[1], ' ', &size);
	if (ac > 2)
	{
		size = ac - 1;
		tab = malloc(sizeof(int) * size);
		if (!tab)
			exit(1);
		i = -1;
		while (++i < size)
			tab[i] = ft_atoi(av[i + 1]);
	}
	ft_printf("ac : %d\n", ac);
	printf_tab(tab, size);
	free(tab);
	return (0);
}

//ARG='3 2 1 0'; ./push_swap $ARG | ./checker_linux $ARG

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	(void)av;
// 	ft_printf("rra\n");
// 	ft_printf("pb\n");
// 	ft_printf("sa\n");
// 	ft_printf("rra\n");
// 	ft_printf("pa\n");
// 	return (0);
// }
