/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:37:20 by rcolorad          #+#    #+#             */
/*   Updated: 2024/09/20 01:34:00 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse_rotate(t_stack **stack)
{
    if (*stack == NULL)
        return ;
    *stack = (*stack)->prev;
}

void    rra(t_stack **stack_a)
{
    reverse_rotate(stack_a);
    write(1, "rra\n", 4);
}
void    rrb(t_stack **stack_b)
{
    reverse_rotate(stack_b);
    write(1, "rrb\n", 4);
}

void    rrr(t_stack **stack_a, t_stack **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    write(1, "rrr\n", 4);
}