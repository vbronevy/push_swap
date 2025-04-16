/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbronevy <vbronevy@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-16 16:02:05 by vbronevy          #+#    #+#             */
/*   Updated: 2025-04-16 16:02:05 by vbronevy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_size(int	*stack)
{
	int	i;

	i = 0;
	while(stack[i])
	{
		i++;
	}
	return(i);
}

int swap_a(int *stack_a)
{
	int	holder;

	holder = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = holder;

	return(1);
}

int push_a(int	*stack_a, int *stack_b)
{

}
int rotate_a(int *stack_a)
{
	int size;
	int i;
	int	holder;

	size = stack_size(stack_a) - 1;
	// printf("%d", size);
	i = 1;
	while(i < size + 1)
	{
		holder = stack_a[size];
		stack_a[size] = stack_a[size - i];
		stack_a[size - i] = holder;
		i++;
	}
	return (1);
}

