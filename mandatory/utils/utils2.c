/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:50:54 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/21 13:25:49 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*join_args(char **argv)
{
	char	*args;
	int		i;

	i = 1;
	args = NULL;
	while (argv[i])
	{
		args = ft_strjoin(args, argv[i]);
		args = ft_strjoin(args, " ");
		i++;
	}
	return (args);
}

int	min_number(t_stack *stack_a)
{
	int		min;
	t_stack	*node;

	min = stack_a->content;
	node = stack_a->next;
	while (node)
	{
		if (node->content < min)
			min = node->content;
		node = node->next;
	}
	return (min);
}

int	min_position(t_stack *a)
{
	int		min;
	int		index;
	t_stack	*tmp_a;

	min = min_number(a);
	index = 0;
	tmp_a = a;
	while (tmp_a)
	{
		if (min == tmp_a->content)
			break ;
		else
			tmp_a = tmp_a->next;
		index++;
	}
	return (index);
}

void	min_to_top(t_stack **a)
{
	int	index;
	int	size;
	int	min;

	index = 0;
	size = ft_lstsize(*a);
	min = min_number(*a);
	index = min_position(*a);
	if (index <= size / 2)
	{
		while ((*a)->content != min)
			ra(a);
	}
	else if (index > size / 2)
	{
		while ((*a)->content != min)
			rra(a);
	}
}
