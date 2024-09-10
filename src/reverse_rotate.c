/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:37:20 by rcolorad          #+#    #+#             */
/*   Updated: 2024/09/10 21:37:56 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse_rotate(t_stack **stack)
{
    int count;

    count = 0;
    if (*stack == NULL)
        return ;
    
}

void    rra(t_stack **stack_a)
{
    reverse_rotate(stack_a);
    printf("rra\n");
}
void    rrb(t_stack **stack_b)
{
    reverse_rotate(stack_b);
    printf("rrb\n");
}

void    rrr(t_stack **stack_a, t_stack **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    printf("rrr\n");
}