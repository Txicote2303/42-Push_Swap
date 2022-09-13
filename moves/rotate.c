/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 06:57:19 by frcarval          #+#    #+#             */
/*   Updated: 2022/06/18 06:57:46 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_index(t_stack a, t_stack b, char letter)
{
	if (letter == 'a')
	{
		write (1, "ra\n", 3);
		rotate(a);
	}
	if (letter == 'b')
	{
		write (1, "rb\n", 3);
		rotate(b);
	}
	if (letter == 'r')
	{
		write (1, "rr\n", 3);
		rotate(a);
		rotate(b);
	}
}

void	rotate(t_stack stack)
{
	int	temp;
	int	counter;

	temp = stack.array[0];
	counter = 1;
	while (counter < stack.size)
	{
		stack.array[counter - 1] = stack.array[counter];
		counter++;
	}
	stack.array[counter - 1] = temp;
}
