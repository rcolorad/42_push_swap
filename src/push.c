/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:37:40 by rcolorad          #+#    #+#             */
/*   Updated: 2024/09/10 21:25:08 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_stack **src, t_stack **dst)
{
    t_stack *aux;

    if (*src == NULL)
        return ;
    aux = (*src)->next;
    (*src)->next = *dst;
    *dst = *src;
    *src = aux;
}

void    pa(t_stack **stack_b, t_stack **stack_a)
{
    push(stack_b, stack_a);
    printf("pa\n");
}

void    pb(t_stack **stack_a, t_stack **stack_b)
{
    push(stack_a, stack_b);
    printf("pb\n");
}