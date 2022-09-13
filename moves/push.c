/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 06:54:55 by frcarval          #+#    #+#             */
/*   Updated: 2022/06/18 06:55:45 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_index(t_stack *a, t_stack *b, char letter)
{
	t_stack	at;
	t_stack	bt;

	at = *a;
	bt = *b;
	if (letter == 'a')
	{
		write (1, "pa\n", 3);
		push(at, bt);
		(at).size++;
		(bt).size--;
	}
	if (letter == 'b')
	{
		write (1, "pb\n", 3);
		push(bt, at);
		(at).size--;
		(bt).size++;
	}
	*a = at;
	*b = bt;
}

void	push(t_stack receiver, t_stack sender)
{
	int	counter;

	counter = receiver.size;
	while (0 < counter)
	{
		receiver.array[counter] = receiver.array[counter - 1];
		counter--;
	}
	receiver.array[0] = sender.array[0];
	counter = 0;
	while (counter < sender.size - 1)
	{
		sender.array[counter] = sender.array[counter + 1];
		counter++;
	}
	sender.array[counter] = 0;
}
