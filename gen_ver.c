/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_ver.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 06:59:29 by frcarval          #+#    #+#             */
/*   Updated: 2022/06/18 06:59:50 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	gen_ver(int argc, char	**argv)
{
	int	counter;
	int	counter2;

	counter = 1;
	counter2 = 2;
	if (argc < 2)
		return (0);
	if (validarg(argv[counter]) == 0)
		return (-1);
	while (argv[counter])
	{
		while (argv[counter2])
		{
			if (validarg(argv[counter2]) == 0)
				return (-1);
			if (my_atoi(argv[counter]) == my_atoi(argv[counter2]))
				return (-1);
			counter2++;
		}
		counter++;
		counter2 = counter + 1;
	}
	return (1);
}

int	order_ver(t_stack a)
{
	int	counter;

	counter = 0;
	while (counter + 1 < a.size)
	{
		if (a.array[counter] != counter + 1)
			return (0);
		counter++;
	}
	return (1);
}
