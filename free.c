/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eharuni <eharuni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:44:23 by eharuni           #+#    #+#             */
/*   Updated: 2022/02/12 15:44:23 by eharuni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_dptr(char **ptr)
{
	int	i;

	i = -1;
	while (ptr[++i])
		free(ptr[i]);
	free(ptr);
}

void	free_all(t_stack *main, t_stack *temp)
{
	free(main->stack);
	free(temp->stack);
	free(main);
	free(temp);
}
