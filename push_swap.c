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

int	check_list(s_node **stack_a)
{
	s_node *current;
	int i;
	current = *stack_a;
	i = 0;
	while(current->next !=NULL){
		if(current < current->next){
			current = current->next;
			continue;
		}
		return(0);
	}
	return(1);
}

int	push_swap(s_node **stack_a)
{
	s_node	*stack_b;
	s_node	*current;
	int i;

	i = 0;
	stack_b = malloc(sizeof(s_node));
	stack_b = NULL;
	current = *stack_a;
	if(check_list(stack_a) == 0){
		return(0);
	}
	// while(current != NULL){
	// 	i++;
	// 	current = current->next;
	// }
	if(current->number > (current->next)->number){
		swap_a(*stack_a);
	}
	// current = *stack_a;
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
	char n;
	
	i = 0;
	s_node* start_node;
	s_node* current_node;
	start_node = NULL;
	current_node = NULL;

	while(i < argc + (argc - 1))
	{
		s_node* node = malloc(sizeof(s_node));
		n = atoi(&argv[1][i]);
		if(n == 0){
			i++;
			continue;
		}
		node->number = atoi(&argv[1][i]);
		printf("n:%d\n", node->number);
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
	// while(current != NULL){
	// 	printf("stack_a: %d\n", current->number);
	// 	current = current->next;
	// 	i++;	
	// }
    return 0;
}
