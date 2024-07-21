/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:37:14 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/21 13:21:50 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	indixing(t_stack *a)
{
	int		i;
	t_stack	*p1;
	t_stack	*p2;

	i = 0;
	p1 = a;
	while (p1)
	{
		p2 = a;
		i = 0;
		while (p2)
		{
			if (p1->content > p2->content)
				i++;
			p2 = p2->next;
		}
		p1->index = i;
		p1 = p1->next;
	}
}

int	range_equations(int n)
{
	int	range;

	if (n <= 100)
		range = 15;
	else
		range = 30;
	return (range);
}

void	ft_range(t_stack **a, t_stack **b)
{
	int	min_range;
	int	max_range;

	min_range = 0;
	max_range = range_equations(ft_lstsize(*a));
	indixing(*a);
	while (*a)
	{
		if (((*a)->index >= min_range) && ((*a)->index <= max_range))
		{
			pb(a, b);
			min_range++;
			max_range++;
		}
		else if ((*a)->index < min_range)
		{
			pb(a, b);
			rb(b);
			min_range++;
			max_range++;
		}
		else if ((*a)->index > max_range)
			ra(a);
	}
}

int	max_number(t_stack *b)
{
	int		max;
	t_stack	*node;

	max = b->content;
	node = b->next;
	while (node)
	{
		if (node->content > max)
			max = node->content;
		node = node->next;
	}
	return (max);
}

int	max_position(t_stack *b)
{
	int		max;
	int		index;
	t_stack	*tmp_b;

	max = max_number(b);
	index = 0;
	tmp_b = b;
	while (tmp_b)
	{
		if (max == tmp_b->content)
			break ;
		else
		{
			tmp_b = tmp_b->next;
			index++;
		}
	}
	return (index);
}
