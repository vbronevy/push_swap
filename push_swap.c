/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbronevy <vbronevy@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-16 15:04:32 by vbronevy          #+#    #+#             */
/*   Updated: 2025-04-16 15:04:32 by vbronevy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int *stack_a)
{
	int	*stack_b;

	swap_a(stack_a);
	swap_a(stack_a);
	rotate_a(stack_a);
}

int main(int argc, char	 *argv[])
{
	int	i;
	int j;
	int	*stack_a;

	stack_a = malloc(argc * 4);
	i = 1;
	j = 0;
	while(i < argc)
	{
		stack_a[i - 1] = *argv[i] - 48;
		i++;
	}
	stack_a[i - 1] = '\0'; 
	push_swap(stack_a);
	i = 0;
	while(i < 5)
	{
		printf("%d ", stack_a[i]);
		i++;
	}
	free(stack_a);
}