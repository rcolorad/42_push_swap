/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:37:56 by rcolorad          #+#    #+#             */
/*   Updated: 2024/09/20 01:33:47 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct  s_stack
{
    int         value;
    int         index;
    t_stack     *next;
    t_stack     *prev;
}   t_stack;

void    reverse_rotate(t_stack **stack);
void    rra(t_stack **stack_a);
void    rrb(t_stack **stack_a);
void    rrr(t_stack **stack_a, t_stack **stack_b);
void    push(t_stack **src, t_stack **dst);
void    pa(t_stack **stack_b, t_stack **stack_a);
void    pb(t_stack **stack_a, t_stack **stack_b);
void    rotate(t_stack **stack);
void    ra(t_stack **stack_a);
void    rb(t_stack **stack_b);
void    rr(t_stack **stack_a, t_stack **stack_b);
void    swap(t_stack **stack);
void    sa(t_stack **stack_a);
void    sb(t_stack **stack_b);
void    ss(t_stack **stack_a, t_stack **stack_b);

#endif