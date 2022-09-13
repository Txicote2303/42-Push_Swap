/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:47:08 by frcarval          #+#    #+#             */
/*   Updated: 2022/06/18 07:41:57 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	int	*array;
	int	size;
}	t_stack;

t_stack	attributerarg(char	**args, int size);
t_stack	attributer(int size);
int		gen_ver(int argc, char	**argv);
int		order_ver(t_stack a);
void	caseof3(t_stack *a, t_stack *b);
void	caseof5(t_stack *a, t_stack *b);
int		my_atoi(char	*string);
int		atoi_ver(char	*string);
int		validarg(char	*string);
void	radix_pt2(t_stack *a, t_stack *b, int max_bits, int max_num);
void	rotate_index(t_stack a, t_stack b, char letter);
void	r_rotate_index(t_stack a, t_stack b, char letter);
void	swap_index(t_stack a, t_stack b, char letter);
void	push_index(t_stack *a, t_stack *b, char letter);
void	rotate(t_stack stack);
void	r_rotate(t_stack stack);
void	swap(t_stack stack);
void	push(t_stack receiver, t_stack sender);
void	radix(t_stack *a, t_stack *b);

#endif