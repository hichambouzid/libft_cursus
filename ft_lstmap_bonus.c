/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:17:17 by hibouzid          #+#    #+#             */
/*   Updated: 2023/11/10 21:30:26 by hibouzid         ###   ########.fr       */
=======
/*   By: hibouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:05:34 by hibouzid          #+#    #+#             */
/*   Updated: 2023/11/10 18:10:39 by hibouzid         ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
<<<<<<< HEAD
	t_list *ptr;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
	del(ptr->content)
	ptr->content = f(lst->content);
=======
	
>>>>>>> refs/remotes/origin/main
}
