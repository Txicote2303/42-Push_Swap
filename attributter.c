/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attributter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 06:58:28 by frcarval          #+#    #+#             */
/*   Updated: 2022/06/18 06:59:22 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lowestnr(t_stack	stack, int low_bar)
{
	int	min;
	int	counter;
	int	result;

	counter = 0;
	result = stack.size;
	min = stack.array[low_bar];
	while (counter < stack.size)
	{
		if (stack.array[counter] > min)
			result--;
		counter++;
	}
	return (result);
}

t_stack	pos(t_stack temp)
{
	t_stack	stack;
	int		counter;

	counter = 0;
	stack.array = malloc(temp.size * sizeof(int));
	stack.size = temp.size;
	while (counter < temp.size)
	{
		stack.array[counter] = lowestnr(temp, counter);
		counter++;
	}
	return (stack);
}

t_stack	attributerarg(char	**args, int size)
{
	t_stack	stack;
	t_stack	stacktemp;
	int		counter;

	counter = 0;
	stacktemp.array = malloc(sizeof(int) * size);
	while (counter < size)
	{
		stacktemp.array[counter] = my_atoi(args[counter + 1]);
		counter++;
	}
	stacktemp.size = counter;
	stack = pos(stacktemp);
	return (stack);
}

t_stack	attributer(int size)
{
	t_stack	stack;
	int		counter;

	counter = 0;
	stack.array = malloc(sizeof(int) * size);
	while (counter < size)
	{
		stack.array[counter] = 0;
		counter++;
	}
	stack.size = 0;
	return (stack);
}
