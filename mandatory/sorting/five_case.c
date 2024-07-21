/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:29:27 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 15:54:40 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_stack **a)
{
	if ((*a)->content > (*a)->next->content)
		sa(a);
}

void	sort_three(t_stack **a)
{
	int	nb1;
	int	nb2;
	int	nb3;

	nb1 = (*a)->content;
	nb2 = (*a)->next->content;
	nb3 = (*a)->next->next->content;
	if ((nb1 > nb2) && (nb2 < nb3) && (nb3 > nb1))
		sa((a));
	if ((nb1 > nb2) && (nb2 > nb3))
	{
		sa((a));
		rra((a));
	}
	if ((nb1 > nb2) && (nb2 < nb3) && (nb1 > nb3))
		ra((a));
	if ((nb1 < nb2) && (nb2 > nb3) && (nb3 > nb1))
	{
		sa((a));
		ra((a));
	}
	if ((nb1 < nb2) && (nb2 > nb3) && (nb3 < nb1))
		rra((a));
}

void	sort_four(t_stack **a, t_stack **b)
{
	min_to_top(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	min_to_top(a);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}
