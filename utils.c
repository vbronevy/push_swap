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
#include <limits.h>

static int is_digit_str(char *s)
{
	if (*s == '-' || *s == '+')
		s++;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

static int to_int(char *s)
{
	long num = strtol(s, NULL, 10);
	if (num < INT_MIN || num > INT_MAX)
		exit_error();
	return ((int)num);
}

static int is_duplicate(s_node *head, int num)
{
	while (head)
	{
		if (head->number == num)
			return (1);
		head = head->next;
	}
	return (0);
}

s_node *parse_args(int argc, char **argv)
{
	s_node *head = NULL;
	s_node *node, *tail = NULL;
	int i = 1, num;

	while (i < argc)
	{
		if (!is_digit_str(argv[i]))
			exit_error();
		num = to_int(argv[i]);
		if (is_duplicate(head, num))
			exit_error();
		node = malloc(sizeof(s_node));
		if (!node)
			exit_error();
		node->number = num;
		node->index = 0;
		node->next = NULL;
		if (!head)
			head = node;
		else
			tail->next = node;
		tail = node;
		i++;
	}
	return (head);
}

void exit_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void free_stack(s_node *stack)
{
	s_node *tmp;
	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

int is_sorted(s_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->number > stack->next->number)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int stack_size(s_node *stack)
{
	int i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

void assign_indexes(s_node **stack)
{
	int     size = list_size(*stack);
	int    *array = malloc(sizeof(int) * size);
	s_node *tmp = *stack;
	int     i = 0;

	// Copy values into array
	while (tmp)
	{
		array[i++] = tmp->number;
		tmp = tmp->next;
	}

	// Sort the array
	for (int j = 0; j < size - 1; j++)
	{
		for (int k = 0; k < size - 1 - j; k++)
		{
			if (array[k] > array[k + 1])
			{
				int swap = array[k];
				array[k] = array[k + 1];
				array[k + 1] = swap;
			}
		}
	}

	// Assign indexes
	tmp = *stack;
	while (tmp)
	{
		for (i = 0; i < size; i++)
		{
			if (tmp->number == array[i])
			{
				tmp->index = i;
				break;
			}
		}
		tmp = tmp->next;
	}

	free(array);
}


