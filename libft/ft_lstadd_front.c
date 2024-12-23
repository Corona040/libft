/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:11:39 by ecorona-          #+#    #+#             */
/*   Updated: 2024/10/26 16:33:23 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	lst: The address of a pointer to the first link of a list.
	new: The address of a pointer to the node to be added to the list.
RETURN VALUE:
	None.
DESC:
	Adds the node 'new' at the beginning of the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp_lst;

	if (lst != 0)
	{
		tmp_lst = *lst;
		*lst = new;
		new->next = tmp_lst;
	}
}
