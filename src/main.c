/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:30:09 by rcolorad          #+#    #+#             */
/*   Updated: 2024/09/20 02:05:37 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	
	stack_a = NULL;
	stack_b = NULL;	
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (parse(argc, argv, &stack_a))
		sort_stack(&stack_a, &stack_b);
	free_stack();
	return (0);
}