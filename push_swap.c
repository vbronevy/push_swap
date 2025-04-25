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

typedef struct s_node{
	int number;
	struct s_node* next;
}s_node;

int	push_swap(int *stack_a, int size)
{
	int	*stack_b;

	stack_b = malloc(size * 4);

	
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
		node->number = *argv[i] - 48;
		node->next = NULL;

		if(start_node == NULL)
			start_node = node;
		else
			current_node->next = node;
		current_node = node;
		i++;
	}
	s_node* current = start_node;
	i = 0;
	while(current != NULL){
		printf("%d\n", current->number);
		current = current->next;
		i++;
	}
    return 0;
}
