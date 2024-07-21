/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:26:56 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 23:20:25 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

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
}
