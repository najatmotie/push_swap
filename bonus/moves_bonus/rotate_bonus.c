/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:22:25 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 23:20:40 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ra(t_stack **a)
{
	int		number;
	int		its_index;
	int		index;
	t_stack	*tmp;

	tmp = NULL;
	if (*a)
	{
		its_index = (*a)->index;
		number = del_front(a);
		while ((*a) != NULL)
		{
			index = (*a)->index;
			add_front(&tmp, ft_lstnew(del_front(a), index));
		}
		add_front(a, ft_lstnew(number, its_index));
		while (tmp != NULL)
		{
			index = tmp->index;
			add_front(a, ft_lstnew(del_front(&tmp), index));
		}
	}
}

void	rb(t_stack **b)
{
	int		number;
	int		numbers;
	t_stack	*node;
	t_stack	*nodes;
	t_stack	*tmp;

	tmp = NULL;
	if (*b)
	{
		number = del_front(b);
		while ((*b) != NULL)
		{
			numbers = del_front(b);
			nodes = ft_lstnew(numbers, 0);
			add_front(&tmp, nodes);
		}
		node = ft_lstnew(number, 0);
		add_front(b, node);
		while ((tmp) != NULL)
		{
			numbers = del_front(&tmp);
			nodes = ft_lstnew(numbers, 0);
			add_front(b, nodes);
		}
	}
}

void	rotate_a(t_stack **a)
{
	int		number;
	t_stack	*tmp;

	tmp = NULL;
	if (*a)
	{
		number = del_front(a);
		while ((*a) != NULL)
			add_front(&tmp, ft_lstnew(del_front(a), 0));
		add_front(a, ft_lstnew(number, 0));
		while (tmp != NULL)
			add_front(a, ft_lstnew(del_front(&tmp), 0));
	}
}

void	rotate_b(t_stack **b)
{
	int		number;
	t_stack	*tmp;

	tmp = NULL;
	if (*b)
	{
		number = del_front(b);
		while ((*b) != NULL)
			add_front(&tmp, ft_lstnew(del_front(b), 0));
		add_front(b, ft_lstnew(number, 0));
		while ((tmp) != NULL)
			add_front(b, ft_lstnew(del_front(&tmp), 0));
	}
}

void	rr(t_stack **a, t_stack **b)
{
	rotate_a(a);
	rotate_b(b);
}
