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

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node{
	int number;
	struct s_node* next;
}s_node;

int swap_a(s_node *stack_a);
int rotate_a(s_node **stack_a);
int r_rotate_a(s_node **stack_a);
int push_b(s_node **stack_a, s_node **stack_b);
int push_a(s_node	**stack_a,s_node **stack_b);

#endif	