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
		i++;
	return(i);
}

int swap_a(s_node *stack_a)
{
	int	holder;
	s_node *next;

	next = stack_a->next;
	holder = stack_a->number;
	stack_a->number = next->number;
	next->number = holder;

	printf("sa\n");
	return(1);
}

int push_a(int	*stack_a, int *stack_b)
{
	if(stack_b[0] == '\0' || stack_b[1] == '\0')
		return (0);
	
	
}

int push_b(int *stack_a, int *stack_b)
{
	if(stack_a[0]  = '\0')
		return(0);
	
}
int rotate_a(s_node **stack_a)
{
	int size;
	s_node *last;
	s_node *first;

	first = *stack_a;
	last = *stack_a;
	while (last->next != NULL) {
        last = last->next;
    }
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;

	printf("ra\n");
	return (1);
}

int r_rotate_a(int *stack_a)
{
	int size;
	int i;
	int	holder;

	size = stack_size(stack_a) - 1;
	// printf("%d", size);
	i = 1;
	while(i < size + 1)
	{
		holder = stack_a[0];
		stack_a[0] = stack_a[i];
		stack_a[i] = holder;
		i++;
	}
	printf("rra\n");
	return (1);
}