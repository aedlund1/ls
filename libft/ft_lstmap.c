/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaura-n <tsaura-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:05:27 by tsaura-n          #+#    #+#             */
/*   Updated: 2019/12/07 19:19:08 by tsaura-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*alst;
	t_list	*node;

	if (!lst || !(*f))
		return (NULL);
	alst = (t_list *)malloc(sizeof(t_list *));
	alst = (*f)(lst);
	lst = lst->next;
	while (lst != NULL)
	{
		node = (t_list *)malloc(sizeof(t_list *));
		node = (*f)(lst);
		ft_lstaddend(&alst, node);
		lst = lst->next;
	}
	return (alst);
}
