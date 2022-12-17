/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:08:38 by lcoissar          #+#    #+#             */
/*   Updated: 2022/12/17 14:56:53 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//gcc -Wall -Wextra -Werror push_swap.c ft_atoi.c ft_split.c ft_strlen.c -o push_swap
//ARG='3 2 1 0'; ./push_swap $ARG | ./checker_linux $ARG

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	(void)av;
// 	printf("rra\n");
// 	printf("pb\n");
// 	printf("sa\n");
// 	printf("rra\n");
// 	printf("pa\n");
// 	return (0);
// }

int	main(int ac, char **av)
{
	int		*tab;
	char	**tab2;
	int		i;
	int		j = 0;

	printf("ac : %d\n", ac);
	if (ac == 1)
		return (0);
	if (ac == 2)
	{
		tab2 = ft_split(av[1], ' ');
		i = 0;
		while (tab2[i])
			i++;
		tab = malloc(sizeof(int) * (i));
		while (j < i)
		{
			tab[j] = ft_atoi(tab2[j]);
			printf("%d ", tab[j]);
			free(tab2[j]);
			j++;
		}
		free(tab2);
		printf("\n");
		free(tab);
	}
	if (ac > 2)
	{
		i = 0;
		tab = malloc(sizeof(int) * (ac - 1));
		while (i < (ac - 1))
		{
			tab[i] = ft_atoi(av[i + 1]);
			printf("%d ", tab[i]);
			i++;
		}
		printf("\n");
		free(tab);
	}
	return (0);
}
