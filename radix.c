/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 07:06:31 by frcarval          #+#    #+#             */
/*   Updated: 2022/06/19 17:25:51 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_pt2(t_stack *a, t_stack *b, int max_bits, int max_num)
{
	t_stack	at;
	t_stack	bt;
	int		counter;
	int		counter2;

	at = *a;
	bt = *b;
	counter = -1;
	while (++counter < max_bits)
	{
		counter2 = -1;
		while (++counter2 < max_num)
		{
			if (((at.array[0] >> counter) & 1) != 1)
				push_index(&at, &bt, 'b');
			else
				rotate_index(at, bt, 'a');
		}
		while (bt.size > 0)
			push_index(&at, &bt, 'a');
	}
	*a = at;
	*b = bt;
}

void	radix(t_stack *a, t_stack *b)
{
	t_stack	at;
	t_stack	bt;
	int		max_bits;
	int		maxnum;

	at = *a;
	bt = *b;
	maxnum = at.size;
	max_bits = 0;
	while (maxnum >> max_bits != 0)
		max_bits++;
	radix_pt2(&at, &bt, max_bits, maxnum);
	*a = at;
	*b = bt;
}
