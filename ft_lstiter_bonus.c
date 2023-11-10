/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:13:44 by hibouzid          #+#    #+#             */
/*   Updated: 2023/11/10 17:41:57 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
<<<<<<< HEAD
	t_list	*ptr;
=======
	// t_list *ptr;
>>>>>>> refs/remotes/origin/main

	// ptr = lst;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
