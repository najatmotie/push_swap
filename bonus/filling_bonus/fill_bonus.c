/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:58:43 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 16:12:30 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	fill_stack(t_stack **a, char **all)
{
	int	i;
	int	j;
	int	numbs;

	i = 0;
	*a = NULL;
	while (all[i])
		i++;
	j = i - 1;
	while (j >= 0)
	{
		numbs = ft_atol(all[j]);
		add_front(a, ft_lstnew(numbs, 0));
		j--;
	}
}
