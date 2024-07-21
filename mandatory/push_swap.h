/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:40:30 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/21 13:22:09 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				index;
	int				content;
	struct s_stack	*next;
}					t_stack;

/* reutilisation the functions of libft */
size_t				ft_strlen(const char *s);
long				ft_atol(const char *str);
char				*ft_strjoin(char *s1, char *s2);
char				**ft_split(char *s, char c);
int					ft_lstsize(t_stack *stack_a);
t_stack				*ft_lstnew(int nb, int index);
void				add_front(t_stack **head, t_stack *new);
int					del_front(t_stack **head);
void				ft_lstclear(t_stack **lst);

/* errors handle */
void				ft_free(char **all);
void				ft_error(void);
int					check_space_and_empty(char *all);
int					check_digit(char *all);
int					check_duplicate(char **all);
int					check_limits(char *all);
void				check_args(char **argv);
void				check_errors(char **ptr);

/* operations */
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);

/* sorting */
char				*join_args(char **argv);
void				fill_stack(t_stack **a, char **all);
void				min_to_top(t_stack **a);
int					max_number(t_stack *b);
int					max_position(t_stack *b);
void				sort_two(t_stack **a);
void				sort_three(t_stack **a);
void				sort_four(t_stack **a, t_stack **b);
void				sort_five(t_stack **a, t_stack **b);
void				ft_range(t_stack **a, t_stack **b);
void				sort_stack(t_stack **a, t_stack **b);

#endif