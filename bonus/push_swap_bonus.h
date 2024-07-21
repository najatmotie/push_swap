/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <nmotie-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:40:55 by nmotie-           #+#    #+#             */
/*   Updated: 2024/07/20 16:29:51 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_stack
{
	int				index;
	int				content;
	struct s_stack	*next;
}					t_stack;

/* reutilisation previous functions */
size_t				ft_strlen(const char *s);
long				ft_atol(const char *str);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strdup(char *s1);
char				**ft_split(char *s, char c);
int					ft_lstsize(t_stack *stack_a);
t_stack				*ft_lstnew(int nb, int index);
void				add_front(t_stack **head, t_stack *new);
int					del_front(t_stack **head);
void				ft_lstclear(t_stack **lst);
int					ft_strcmp(char *s1, char *s2);
char				*get_next_line(int fd);

/* errors handle */
void				ft_free(char **all);
void				ft_error(void);
int					check_space_and_empty(char *str);
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

/* filling */
char				*join_args(char **argv);
void				fill_stack(t_stack **a, char **all);
int					stack_sorted(t_stack *stack_a);

#endif