/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:13:32 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 23:19:46 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack **a)
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
		write(1, "rra\n", 4);
	}
}

void	rrb(t_stack **b)
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
		write(1, "rrb\n", 4);
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
	write(1, "rrr\n", 4);
}
