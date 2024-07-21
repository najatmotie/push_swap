/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:13:02 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 16:25:25 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	if (*b != NULL)
	{
		add_front(a, ft_lstnew(del_front(b), 0));
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack **a, t_stack **b)
{
	if (*a != NULL)
	{
		add_front(b, ft_lstnew(del_front(a), 0));
		write(1, "pb\n", 3);
	}
}
