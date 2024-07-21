/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:00:13 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 16:26:37 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	pa(t_stack **a, t_stack **b)
{
	if (*b != NULL)
		add_front(a, ft_lstnew(del_front(b), 0));
}

void	pb(t_stack **a, t_stack **b)
{
	if (*a != NULL)
		add_front(b, ft_lstnew(del_front(a), 0));
}
