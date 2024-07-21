/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:24:51 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 19:49:47 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

int	verify_oper(char *input)
{
	if (ft_strcmp(input, "pa\n") == 0 || ft_strcmp(input, "pb\n") == 0
		|| ft_strcmp(input, "sa\n") == 0 || ft_strcmp(input, "sb\n") == 0
		|| ft_strcmp(input, "ss\n") == 0 || ft_strcmp(input, "ra\n") == 0
		|| ft_strcmp(input, "rb\n") == 0 || ft_strcmp(input, "rr\n") == 0
		|| ft_strcmp(input, "rra\n") == 0 || ft_strcmp(input, "rrb\n") == 0
		|| ft_strcmp(input, "rrr\n") == 0)
		return (0);
	else
		return (1);
}

void	apply_oper(t_stack **a, t_stack **b, char *input)
{
	if (ft_strcmp(input, "pa\n") == 0)
		pa(a, b);
	else if (ft_strcmp(input, "pb\n") == 0)
		pb(a, b);
	else if (ft_strcmp(input, "sa\n") == 0)
		sa(a);
	else if (ft_strcmp(input, "sb\n") == 0)
		sb(b);
	else if (ft_strcmp(input, "ss\n") == 0)
		ss(a, b);
	else if (ft_strcmp(input, "ra\n") == 0)
		ra(a);
	else if (ft_strcmp(input, "rb\n") == 0)
		rb(b);
	else if (ft_strcmp(input, "rr\n") == 0)
		rr(a, b);
	else if (ft_strcmp(input, "rra\n") == 0)
		rra(a);
	else if (ft_strcmp(input, "rrb\n") == 0)
		rrb(b);
	else if (ft_strcmp(input, "rrr\n") == 0)
		rrr(a, b);
}

void	checker(t_stack **a, t_stack **b)
{
	char	*input;

	input = get_next_line(0);
	while (input != NULL)
	{
		if (verify_oper(input) == 0)
			apply_oper(a, b, input);
		else
		{
			write(2, "Error\n", 6);
			free(input);
			return ;
		}
		free(input);
		input = get_next_line(0);
	}
	if (stack_sorted(*a) == 0 && *b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	char	**all;
	char	*args;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	args = NULL;
	if (argc > 1)
	{
		check_args(argv);
		args = join_args(argv);
		all = ft_split(args, ' ');
		free(args);
		check_errors(all);
		fill_stack(&a, all);
		ft_free(all);
		checker(&a, &b);
		ft_lstclear(&a);
		ft_lstclear(&b);
	}
	return (0);
}
