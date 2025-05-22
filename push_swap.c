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


int	push_swap(s_node **stack_a)
{
	s_node	*stack_b;
	s_node	*current;
	int i;

	i = 0;
	stack_b = malloc(sizeof(s_node));
	stack_b = NULL;
	current = *stack_a;

	while(current != NULL){
		if(current->number > (current->next)->number){
			rotate_a(stack_a);
		}
		else{
			swap_a(*stack_a);
			rotate_a(stack_a);
		}
		current = current->next;
	}
	// current = stack_b;
	// while(current != NULL){
	// 	printf("stack_b: %d\n", current->number);
	// 	current = current->next;
	// 	i++;	
	// }
	return (0);
}

int main(int argc, char	 *argv[])
{
	int	i;
	
	i = 1;
	s_node* start_node;
	s_node* current_node;
	start_node = NULL;
	current_node = NULL;

	while(i < argc)
	{
		s_node* node = malloc(sizeof(s_node));
		node->number = atoi(argv[i]);
		node->next = NULL;

		if(start_node == NULL)
			start_node = node;
		else
			current_node->next = node;
		current_node = node;
		i++;
	}
	i = 0;
	push_swap(&start_node);
	s_node* current = start_node;
	while(current != NULL){
		printf("stack_a: %d\n", current->number);
		current = current->next;
		i++;	
	}
    return 0;
}
