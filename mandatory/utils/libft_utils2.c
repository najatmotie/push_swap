/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:43:17 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 19:36:24 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_stack *stack_a)
{
	int	count;

	count = 0;
	while (stack_a != NULL)
	{
		count++;
		stack_a = stack_a->next;
	}
	return (count);
}

t_stack	*ft_lstnew(int nb, int index)
{
	t_stack	*newnode;

	newnode = malloc(sizeof(t_stack));
	if (newnode == NULL)
		return (NULL);
	newnode->index = index;
	newnode->content = nb;
	newnode->next = NULL;
	return (newnode);
}

void	add_front(t_stack **head, t_stack *new)
{
	if (new != NULL)
	{
		if (head == NULL)
			*head = new;
		else
		{
			new->next = *head;
			*head = new;
		}
	}
}

int	del_front(t_stack **head)
{
	t_stack	*save;
	int		n;

	save = *head;
	*head = (*head)->next;
	n = save->content;
	free(save);
	save = NULL;
	return (n);
}

void	ft_lstclear(t_stack **lst)
{
	t_stack	*node;
	t_stack	*node_next;

	if (lst == NULL || *lst == NULL)
		return ;
	node = *lst;
	while (node != NULL)
	{
		node_next = node->next;
		free(node);
		node = node_next;
	}
	*lst = NULL;
}
