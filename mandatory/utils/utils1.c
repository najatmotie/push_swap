/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:44:24 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 16:02:24 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_memory(char **result, int j)
{
	while (j >= 0)
	{
		free(result[j]);
		j--;
	}
	free(result);
	result = NULL;
}

int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

void	word_len(char *s, int *start, int *i, char c)
{
	while (s[*i] && s[*i] == c)
		(*i)++;
	*start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
}

void	fill_result(char *s, char c, char **result)
{
	int		i;
	int		j;
	int		k;
	int		start;
	int		words;

	i = 0;
	j = 0;
	start = 0;
	words = count_words(s, c);
	while (j < words)
	{
		word_len((char *)s, &start, &i, c);
		result[j] = malloc(sizeof(char) * (i - start) + 1);
		if (result[j] == NULL)
			free_memory(result, j);
		k = 0;
		while (start < i)
			result[j][k++] = s[start++];
		result[j][k] = '\0';
		j++;
	}
	result[j] = NULL;
}

char	**ft_split(char *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (result == NULL)
		return (NULL);
	fill_result(s, c, result);
	return (result);
}
