/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:20:35 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 23:19:28 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
		write(1, "ra\n", 3);
	}
}

void	rb(t_stack **b)
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
		write(1, "rb\n", 3);
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
	write(1, "rr\n", 3);
}
