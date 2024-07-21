/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:56:40 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/21 13:33:05 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	check_space_and_empty(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int	check_duplicate(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != NULL)
	{
		j = 0;
		while (str[j] != NULL)
		{
			if (ft_atol(str[i]) == ft_atol(str[j]) && j != i)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_digit(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '+' || str[i] == '-') && (str[i + 1] == '\0'))
		return (1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

int	check_limits(char *str)
{
	if (((ft_strlen(str) > 10 && str[0] != '-') || ft_atol(str) > INT_MAX)
		|| ((ft_strlen(str) > 11 && str[0] == '-') || ft_atol(str) < INT_MIN))
		return (1);
	else
		return (0);
}
