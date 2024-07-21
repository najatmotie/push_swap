/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:43:03 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 20:13:22 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

long	ft_atol(const char *str)
{
	int		i;
	long	r;
	int		sign;

	i = 0;
	r = 0;
	sign = 1;
	if (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		r = (r * 10) + (str[i] - 48);
		i++;
	}
	return (r * sign);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	new_s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		new_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
	{
		new_s[i + j] = s2[j];
		j++;
	}
	new_s[i + j] = '\0';
	free(s1);
	return (new_s);
}
