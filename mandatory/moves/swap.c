/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:28:30 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 23:19:06 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **a)
{
	int		tmp1;
	int		tmp2;
	t_stack	*n1;
	t_stack	*n2;

	if (ft_lstsize(*a) > 1)
	{
		tmp1 = del_front(a);
		tmp2 = del_front(a);
		n1 = ft_lstnew(tmp1, 0);
		n2 = ft_lstnew(tmp2, 0);
		add_front(a, n1);
		add_front(a, n2);
		write(1, "sa\n", 3);
	}
}

void	sb(t_stack **b)
{
	int		tmp1;
	int		tmp2;
	t_stack	*n1;
	t_stack	*n2;

	if (ft_lstsize(*b) > 1)
	{
		tmp1 = del_front(b);
		tmp2 = del_front(b);
		n1 = ft_lstnew(tmp1, 0);
		n2 = ft_lstnew(tmp2, 0);
		add_front(b, n1);
		add_front(b, n2);
		write(1, "sb\n", 3);
	}
}

void	swap_a(t_stack **a)
{
	int		tmp1;
	int		tmp2;
	t_stack	*n1;
	t_stack	*n2;

	if (ft_lstsize(*a) > 1)
	{
		tmp1 = del_front(a);
		tmp2 = del_front(a);
		n1 = ft_lstnew(tmp1, 0);
		n2 = ft_lstnew(tmp2, 0);
		add_front(a, n1);
		add_front(a, n2);
	}
}

void	swap_b(t_stack **b)
{
	int		tmp1;
	int		tmp2;
	t_stack	*n1;
	t_stack	*n2;

	if (ft_lstsize(*b) > 1)
	{
		tmp1 = del_front(b);
		tmp2 = del_front(b);
		n1 = ft_lstnew(tmp1, 0);
		n2 = ft_lstnew(tmp2, 0);
		add_front(b, n1);
		add_front(b, n2);
	}
}

void	ss(t_stack **a, t_stack **b)
{
	swap_a(a);
	swap_b(b);
	write(1, "ss\n", 3);
}
