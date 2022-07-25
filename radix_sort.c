/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eharuni <eharuni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:41:58 by eharuni           #+#    #+#             */
/*   Updated: 2022/02/12 15:41:58 by eharuni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *main, t_stack *temp)
{
	int	pow;
	int	j;
	int	*a;

	a = main->stack;
	pow = 0;
	while (pow < main->max_bits)
	{
		j = 0;
		if (is_already_sorted(main))
			break ;
		while (j < main->max_len)
		{
			if (a[main->top] & (1 << pow))
				rotate(main, 1);
			else
				push(temp, main, 0);
			j++;
		}
		while (temp->top >= 0)
			push(main, temp, 1);
		pow++;
	}
}
