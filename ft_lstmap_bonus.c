/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:22:10 by hibouzid          #+#    #+#             */
/*   Updated: 2023/11/12 12:56:15 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list *ptr;

// 	(void)del;
// 	if (!lst)
// 		return (0);
// 	ptr = lst;
// 	while (ptr)
// 	{
// 		ptr->content = f(ptr->content);
// 		ptr = ptr->next;
// 	}
// 	// ptr = lst;
// 	// while (ptr)
// 	// {
// 	// 	ptr = ft_lstnew(ptr->content);

// 	// }
// 	return (lst);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;

	(void)del;
	if (!lst || !f || !del)
		return (0);
	ptr = 0;
	while (lst)
	{
		ft_lstadd_back(&ptr, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (ptr);
}

// void	*f(void *ptr)
// {
// 	char	*pt;

// 	pt = (char *)ptr;
// 	// printf("---> %s\n", pt);
// 	*pt += 1;
// 	//printf("---> %s\n", pt);
// 	return (ptr);
// }

// void	del(void *ptr)
// {
// }

// int	main(void)
// {
// 	t_list	*ptr;
// 	char	tab1[] = "1";
// 	char	tab2[] = "2";
// 	char	tab3[] = "3";
// 	char	tab4[] = "4";
// 	t_list	*new;

// 	ptr = ft_lstnew(tab1);
// 	ft_lstadd_back(&ptr, ft_lstnew(tab2));
// 	ft_lstadd_back(&ptr, ft_lstnew(tab3));
// 	ft_lstadd_back(&ptr, ft_lstnew(tab4));
// 	new = ft_lstmap(ptr, f, del);
// 	while (ptr)
// 	{
// 		printf("%s\n", (char *)ptr->content);
// 		ptr = ptr->next;
// 	}
// }
