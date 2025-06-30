/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbronevy <vbronevy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:04:32 by vbronevy          #+#    #+#             */
/*   Updated: 2025/06/27 15:13:47 by vbronevy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// push_swap.c

#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	s_node *stack_a;
	s_node *stack_b = NULL;

	if (argc < 2)
		return (0);

	stack_a = parse_args(argc, argv);

	if (!stack_a)
		exit_error();
	
	if (!is_sorted(stack_a))
	{
		int size = stack_size(stack_a);
		if (size <= 5)
			sort_small(&stack_a, &stack_b);
		else
			radix_sort(&stack_a);
	}

	free_stack(stack_a);
	return (0);
}


