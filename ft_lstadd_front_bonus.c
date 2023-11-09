/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:36:45 by hibouzid          #+#    #+#             */
/*   Updated: 2023/11/09 18:30:42 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// void ft_print_content(t_list *ptr)
// {
// 	while (ptr)
// 	{
// 		printf("---> %s\n", ptr->content);
// 		ptr = ptr->next;
// 	}
// }

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*save;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	save = *lst;
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = new;
	*lst = save;
}
