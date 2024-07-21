/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frees_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:58:07 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 19:49:50 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_free(char **all)
{
	int	i;

	i = 0;
	while (all[i])
	{
		free(all[i]);
		i++;
	}
	free(all);
	all = NULL;
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	check_args(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (check_space_and_empty(argv[i]) == 1)
			ft_error();
		i++;
	}
}

void	check_errors(char **all)
{
	int	j;

	j = 0;
	if (check_duplicate(all) == 1)
	{
		ft_free(all);
		ft_error();
	}
	while (all[j])
	{
		if ((check_digit(all[j]) == 1) || (check_limits(all[j]) == 1))
		{
			ft_free(all);
			ft_error();
		}
		j++;
	}
}
