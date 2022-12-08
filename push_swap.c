#include <stdio.h>
#include "./libft/libft.h"

//gcc -Wall -Wextra -Werror ./libft/libft.a push_swap.c -o push_swap
//ARG='3 2 1 0'; ./push_swap $ARG | ./checker_mac $ARG

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

int	check_valid_input(char **strs)
{
	//si certains paramètres ne sont pas des nombres
	//ne tiennent pas dans un int
	//s’il y a des doublons.
	int	i;

	i = 0;
	if (!strs)
		return (0);
	while (strs[i])
		printf("%s\n", strs[i++]);
	return (1);

}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		if (check_valid_input(&av[1]))
			printf("let's sort :-)\n");
	}
	else
		printf("Error\n");
	return (0);
}
