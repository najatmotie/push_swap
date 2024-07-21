/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:52:53 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 23:33:54 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		sort_stack(&a, &b);
		ft_lstclear(&a);
		ft_lstclear(&b);
	}
	exit(0);
}
