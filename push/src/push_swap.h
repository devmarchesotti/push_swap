/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalara-s <dalara-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:37:06 by dalara-s          #+#    #+#             */
/*   Updated: 2024/12/17 16:20:51 by dalara-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>

typedef struct stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct stack_node	*target_node;
	struct stack_node	*next;
	struct stack_node	*prev;
}	t_node;

t_node	*get_cheapest(t_node *stack);
t_node	*find_max(t_node *stack);
t_node	*find_last(t_node *stack);
t_node	*find_min(t_node *stack);
t_node	*ft_lstlast(t_node *lst);

void	ra(t_node **a);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	rb(t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **b, t_node **a);
void	rr(t_node **a, t_node **b);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	set_values_b(t_node *a, t_node *b);
void	free_errors(t_node **a);
void	free_stack(t_node **stack);
void	set_median_index(t_node *stack);
void	set_cheapest(t_node *stack);
void	set_values_a(t_node *a, t_node *b);
void	prep_for_push(t_node **stack, t_node *top_node, char stack_name);
void	rotate_both(t_node **a, t_node **b, t_node *cheapest_node);
void	rev_rotate_both(t_node **a, t_node **b, t_node *cheapest_node);
void	move_a_to_b(t_node **a, t_node **b);
void	move_b_to_a(t_node **a, t_node **b);
void	min_on_top(t_node **a);
void	sort_stacks(t_node **a, t_node **b);
void	sort_three(t_node **a);
void	ft_append_node(t_node **stack, int n);
void	ft_add_to_stack(t_node **a, char **argv);

void	swap(t_node **stack);
void	rotate(t_node **stack);
void	rev_rotate(t_node **stack);
void	rev_rotate(t_node **stack);
void	push(t_node **dst, t_node **src);
void	set_target_b(t_node *a, t_node *b);
void	set_target_a(t_node *a, t_node *b);
void	cost_analysis_a(t_node *a, t_node *b);

bool	stack_sorted(t_node *stack);

int		error_syntax(char *str_n);
int		error_duplicate(t_node *a, int n);
int		stack_len(t_node *stack);

long	ft_atoi(char *str);

#endif
