/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 06:57:56 by frcarval          #+#    #+#             */
/*   Updated: 2022/06/18 06:58:16 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_index(t_stack a, t_stack b, char letter)
{
	if (letter == 'a')
	{
		write (1, "sa\n", 3);
		swap(a);
	}
	if (letter == 'b')
	{
		write (1, "sb\n", 3);
		swap(b);
	}
	if (letter == 's')
	{
		write (1, "ss\n", 3);
		swap(a);
		swap(b);
	}
}

void	swap(t_stack stack)
{
	int	temp;

	temp = stack.array[0];
	stack.array[0] = stack.array[1];
	stack.array[1] = temp;
}
