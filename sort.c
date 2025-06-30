/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbronevy <vbronevy@student.42.fr>              +#+  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:11:53 by marvin            #+#    #+#             */
/*   Updated: 2025/06/27 13:11:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(s_node **a)
{
	int	f;
	int	s;
	int	t;

	f = (*a)->number;
	s = (*a)->next->number;
	t = (*a)->next->next->number;
	if (f > s && s < t && f < t)
		sa(a);
	else if (f > s && s > t)
	{
		sa(a);
		rra(a);
	}
	else if (f > s && s < t && f > t)
		ra(a);
	else if (f < s && s > t && f < t)
	{
		sa(a);
		ra(a);
	}
	else if (f < s && s > t && f > t)
		rra(a);
}

void	sort_small(s_node **a, s_node **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 2 && !is_sorted(*a))
		sa(a);
	else if (size == 3)
		sort_three(a);
	else if (size > 3)
	{
		while (stack_size(*a) > 3)
		{
			assign_indexes(a);
			if ((*a)->index == 0 || (*a)->index == 1)
				pb(a, b);
			else
				ra(a);
		}
		sort_three(a);
		if ((*b)->index < (*b)->next->index)
			sa(b);
		pa(a, b);
		pa(a, b);
	}
}

int	list_size(s_node *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

int	radix_sort(s_node **a)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;
	int	count;

	size = list_size(*a);
	max_bits = 0;
	i = 0;
	s_node *b = NULL;
	assign_indexes(a);
	while ((size - 1) >> max_bits)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		count = size;
		while (j < count)
		{
			if (((*a)->index >> i) & 1)
				ra(a);
			else
				pb(a, &b);
			j++;
		}
		while (b)
			pa(a, &b);
		i++;
	}
	return (1);
}