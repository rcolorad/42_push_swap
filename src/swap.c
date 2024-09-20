/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:37:44 by rcolorad          #+#    #+#             */
/*   Updated: 2024/09/20 01:27:10 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_stack **stack)
{
    t_stack		*tmp;
	
    if (*stack == NULL || (*stack)->next == NULL)
        return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void    sa(t_stack **stack_a)
{
    swap(stack_a);
	write(1, "sa\n", 3);
}

void    sb(t_stack **stack_b)
{
    swap(stack_b);
	write(1, "sb\n", 3);
}

void    ss(t_stack **stack_a, t_stack **stack_b)
{
    swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}