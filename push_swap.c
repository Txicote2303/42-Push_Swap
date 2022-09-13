/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 07:00:57 by frcarval          #+#    #+#             */
/*   Updated: 2022/06/18 19:56:13 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char	**argv)
{
	t_stack	a;
	t_stack	b;

	if (gen_ver(argc, argv) == 0)
		return (0);
	if (gen_ver(argc, argv) == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	a = attributerarg(argv, argc - 1);
	b = attributer(argc - 1);
	if (order_ver(a) == 1)
		return (0);
	else if (a.size == 2)
		rotate_index(a, b, 'a');
	else if (a.size == 3)
		caseof3(&a, &b);
	else if (a.size == 5)
		caseof5(&a, &b);
	else
		radix(&a, &b);
	free(a.array);
	free(b.array);
}

//dentro do eval tera uma funcao para verificar se a funcao esta em ordem
//uma funcao para verificar se e possivel um case of 2, um case of 3, 4, 5
//verificar o numero mais baixo

//havera uma funcao para dividir os numeros por 10
