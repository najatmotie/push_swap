/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:41:52 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/21 13:22:36 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_not_sorted(t_stack *stack_a)
{
	while (stack_a->next != NULL)
	{
		if (stack_a->content > stack_a->next->content)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}

void	sort_less_than_5(t_stack **a, t_stack **b)
{
	if (ft_lstsize(*a) == 2)
		sort_two(a);
	else if (ft_lstsize(*a) == 3)
		sort_three(a);
	else if (ft_lstsize(*a) == 4)
		sort_four(a, b);
	else if (ft_lstsize(*a) == 5)
		sort_five(a, b);
}

void	sort_more_than_5(t_stack **a, t_stack **b)
{
	int	size;
	int	max;
	int	index;

	ft_range(a, b);
	while ((*b))
	{
		size = ft_lstsize(*b);
		max = max_number(*b);
		index = max_position(*b);
		if ((*b)->content == max)
			pa(a, b);
		else if (index <= size / 2)
		{
			while ((*b)->content != max)
				rb(b);
			pa(a, b);
		}
		else if (index > size / 2)
		{
			while ((*b)->content != max)
				rrb(b);
			pa(a, b);
		}
	}
}

void	sort_stack(t_stack **a, t_stack **b)
{
	if (stack_not_sorted(*a) == 1)
	{
		if (ft_lstsize(*a) <= 5)
			sort_less_than_5(a, b);
		else
			sort_more_than_5(a, b);
	}
}
