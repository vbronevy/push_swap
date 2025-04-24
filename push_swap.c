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

int	push_swap(int *stack_a, int size)
{
	int	*stack_b;

	stack_b = malloc(size * 4);

	
	return (0);
}

int main(int argc, char	 *argv[])
{
	int	i;
	int	*stack_a;

	stack_a = malloc(argc * 4);
	i = 1;
	while(i < argc)
	{
		stack_a[i - 1] = *argv[i] - 48;
		i++;
	}
	stack_a[i - 1] = '\0'; 
	i = 0;
	while(stack_a[i])
	{
		if(!(stack_a[i] < stack_a[i + 1]))
			break;
		i++;
	}
	if(i != argc)
		push_swap(stack_a, argc);
	// while(stack_a[i])	
	// {
	// 	printf("%d ", stack_a[i]);
	// 	i++;
	// }
	free(stack_a);
    return 0;
}
