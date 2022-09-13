/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 06:56:51 by frcarval          #+#    #+#             */
/*   Updated: 2022/06/18 06:57:15 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate_index(t_stack a, t_stack b, char letter)
{
	if (letter == 'a')
	{
		write (1, "rra\n", 4);
		r_rotate(a);
	}
	if (letter == 'b')
	{
		write (1, "rrb\n", 4);
		r_rotate(b);
	}
	if (letter == 'r')
	{
		write (1, "rrr\n", 4);
		r_rotate(a);
		r_rotate(b);
	}
}

void	r_rotate(t_stack stack)
{
	int	temp;
	int	counter;

	temp = stack.array[stack.size - 1];
	counter = stack.size - 1;
	while (counter > 0)
	{
		stack.array[counter] = stack.array[counter - 1];
		counter--;
	}
	stack.array[0] = temp;
}
