/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbronevy <vbronevy@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-16 16:02:24 by vbronevy          #+#    #+#             */
/*   Updated: 2025-04-16 16:02:24 by vbronevy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// push_swap.h

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_node
{
	int number;
	int index;
	struct s_node *next;
} s_node;

// main
void	exit_error(void);
void	free_stack(s_node *stack);

// utils
int		stack_size(s_node *stack);
void	assign_indexes(s_node **stack);
int		is_sorted(s_node *stack);

// operations
void	sa(s_node **a);
void	sb(s_node **b);
void	ss(s_node **a, s_node **b);
void	pa(s_node **a, s_node **b);
void	pb(s_node **a, s_node **b);
void	ra(s_node **a);
void	rb(s_node **b);
void	rr(s_node **a, s_node **b);
void	rra(s_node **a);
void	rrb(s_node **b);
void	rrr(s_node **a, s_node **b);

// sort
int		radix_sort(s_node **a);
int		list_size(s_node *stack);
void	sort_small(s_node **a, s_node **b);

// parsing
s_node	*parse_args(int argc, char **argv);

#endif
