/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:01:14 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 23:43:05 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rra(t_stack **a)
{
	int		number;
	int		numbers;
	t_stack	*node;
	t_stack	*nodes;
	t_stack	*tmp;

	tmp = NULL;
	if (*a)
	{
		while ((*a) != NULL)
		{
			numbers = del_front(a);
			nodes = ft_lstnew(numbers, 0);
			add_front(&tmp, nodes);
		}
		number = del_front(&tmp);
		while (tmp != NULL)
		{
			numbers = del_front(&tmp);
			nodes = ft_lstnew(numbers, 0);
			add_front(a, nodes);
		}
		node = ft_lstnew(number, 0);
		add_front(a, node);
	}
}

void	rrb(t_stack **b)
{
	int		number;
	int		numbers;
	t_stack	*node;
	t_stack	*nodes;
	t_stack	*tmp;

	tmp = NULL;
	if (*b)
	{
		while ((*b) != NULL)
		{
			numbers = del_front(b);
			nodes = ft_lstnew(numbers, 0);
			add_front(&tmp, nodes);
		}
		number = del_front(&tmp);
		while (tmp != NULL)
		{
			numbers = del_front(&tmp);
			nodes = ft_lstnew(numbers, 0);
			add_front(b, nodes);
		}
		node = ft_lstnew(number, 0);
		add_front(b, node);
	}
}

void	reverse_ra(t_stack **a)
{
	int		number;
	t_stack	*tmp;

	tmp = NULL;
	if (*a)
	{
		while ((*a) != NULL)
			add_front(&tmp, ft_lstnew(del_front(a), 0));
		number = del_front(&tmp);
		while (tmp != NULL)
			add_front(a, ft_lstnew(del_front(&tmp), 0));
		add_front(a, ft_lstnew(number, 0));
	}
}

void	reverse_rb(t_stack **b)
{
	int		number;
	t_stack	*tmp;

	tmp = NULL;
	if (*b)
	{
		while ((*b) != NULL)
			add_front(&tmp, ft_lstnew(del_front(b), 0));
		number = del_front(&tmp);
		while (tmp != NULL)
			add_front(b, ft_lstnew(del_front(&tmp), 0));
		add_front(b, ft_lstnew(number, 0));
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_ra(a);
	reverse_rb(b);
}
