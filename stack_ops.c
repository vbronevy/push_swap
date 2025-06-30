/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbronevy <vbronevy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:14:17 by vbronevy          #+#    #+#             */
/*   Updated: 2025/06/27 13:14:17 by vbronevy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"
#include <stdio.h>

void sa(s_node **a)
{
	if (!*a || !(*a)->next)
		return;
	int tmp = (*a)->number;
	(*a)->number = (*a)->next->number;
	(*a)->next->number = tmp;
	write(1, "sa\n", 3);
}

void pb(s_node **a, s_node **b)
{
	if (!*a)
		return;
	s_node *tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n", 3);
}

void pa(s_node **a, s_node **b)
{
	if (!*b)
		return;
	s_node *tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	write(1, "pa\n", 3);
}

void ra(s_node **a)
{
	if (!*a || !(*a)->next)
		return;
	s_node *first = *a;
	s_node *last = *a;
	while (last->next)
		last = last->next;
	*a = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "ra\n", 3);
}

void rb(s_node **b)
{
	if (!*b || !(*b)->next)
		return;
	s_node *first = *b;
	s_node *last = *b;
	while (last->next)
		last = last->next;
	*b = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "rb\n", 3);
}

void rra(s_node **a)
{
	if (!*a || !(*a)->next)
		return;
	s_node *prev = NULL;
	s_node *last = *a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *a;
	*a = last;
	write(1, "rra\n", 4);
}
