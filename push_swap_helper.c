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

int push_a(s_node	**stack_a, s_node **stack_b)
{		
	s_node *elem;

	if(*stack_b == NULL){
		return(0);
	}
	elem = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_a == NULL){
		*stack_a = elem;
		(*stack_a)->next = NULL;
	}
	else
	{
		elem->next = *stack_a;
		*stack_a = elem;
	}
	return(0);
}

int push_b(s_node **stack_a, s_node **stack_b)
{
	s_node *elem;

	if(*stack_a == NULL){
		return(0);
	}
	elem = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_b == NULL){
		*stack_b = elem;
		(*stack_b)->next = NULL;
	}
	else
	{
		elem->next = *stack_b;
		*stack_b = elem;
	}
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

int r_rotate_a(s_node **stack_a)
{
	s_node *last;
	s_node *b_last;

	b_last = *stack_a;
	last = (*stack_a)->next;
	while (last->next != NULL) {
        last = last->next;
		b_last = b_last->next;
    }
	last->next = *stack_a;
	*stack_a = last; 	
	b_last->next = NULL;
	printf("ra\n");
	return (1);
} 