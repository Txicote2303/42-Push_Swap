/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 07:00:04 by frcarval          #+#    #+#             */
/*   Updated: 2022/06/18 07:00:45 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	atoi_ver(char	*string)
{
	int		mult;
	int		counter;
	long	final;

	counter = 0;
	final = 0;
	if (string[0] == '-')
	{
		mult = -1;
		counter++;
	}
	else
		mult = 1;
	if (string[0] == '+')
		counter++;
	while (string[counter])
	{
		final *= 10;
		final += string[counter] - '0';
		counter++;
	}
	final *= mult;
	if (final < -2147483648 || final > 2147483647)
		return (0);
	return (1);
}

int	validarg(char	*string)
{
	int	counter;

	counter = 0;
	if (string[0] == '-' || string[0] == '+')
		counter++;
	if (!string[counter])
		return (0);
	while (string[counter])
	{
		if (string[counter] > '9' || string[counter] < '0')
			return (0);
		counter++;
	}
	if (atoi_ver(string) == 0)
		return (0);
	return (1);
}

int	my_atoi(char	*string)
{
	int	mult;
	int	counter;
	int	final;

	counter = 0;
	final = 0;
	if (string[0] == '-')
	{
		mult = -1;
		counter++;
	}
	else
		mult = 1;
	if (string[0] == '+')
		counter++;
	while (string[counter])
	{
		final *= 10;
		final += string[counter] - '0';
		counter++;
	}
	return (final * mult);
}
