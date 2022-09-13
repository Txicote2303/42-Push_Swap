/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_cases.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 07:02:32 by frcarval          #+#    #+#             */
/*   Updated: 2022/06/19 17:26:14 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	caseof5(t_stack *a, t_stack *b)
{
	t_stack	at;
	t_stack	bt;
	int		counter;

	at = *a;
	bt = *b;
	counter = 0;
	while (counter <= at.size)
	{
		if (at.array[0] == 1 || at.array[0] == 2)
			push_index(&at, &bt, 'b');
		else
			rotate_index(at, bt, 'a');
		counter++;
	}
	if (bt.array[0] == 1)
		swap_index(at, bt, 'b');
	caseof3(&at, &bt);
	push_index(&at, &bt, 'a');
	push_index(&at, &bt, 'a');
	*a = at;
	*b = bt;
}

void	caseof3_pt2(t_stack *a, t_stack *b)
{
	t_stack	at;
	t_stack	bt;

	at = *a;
	bt = *b;
	if (at.array[0] <= at.array[1] && at.array[1] >= at.array[2]
		&& at.array[0] <= at.array[2])
	{
		swap_index(at, bt, 'a');
		rotate_index(at, bt, 'a');
	}
	if (at.array[0] <= at.array[1] && at.array[1] >= at.array[2]
		&& at.array[0] >= at.array[2])
		r_rotate_index(at, bt, 'a');
	*a = at;
	*b = bt;
}

void	caseof3(t_stack *a, t_stack *b)
{
	t_stack	at;
	t_stack	bt;

	at = *a;
	bt = *b;
	if (at.array[0] >= at.array[1] && at.array[1] <= at.array[2]
		&& at.array[0] <= at.array[2])
		swap_index(at, bt, 'a');
	if (at.array[0] >= at.array[1] && at.array[1] >= at.array[2]
		&& at.array[0] >= at.array[2])
	{
		swap_index(at, bt, 'a');
		r_rotate_index(at, bt, 'a');
	}
	if (at.array[0] >= at.array[1] && at.array[1] <= at.array[2]
		&& at.array[0] >= at.array[2])
		rotate_index(at, bt, 'a');
	else
		caseof3_pt2(&at, &bt);
	*a = at;
	*b = bt;
}
