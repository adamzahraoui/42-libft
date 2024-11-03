/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:23:41 by adzahrao          #+#    #+#             */
/*   Updated: 2024/10/29 05:16:25 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*c;
	t_list	*list;

	if (!lst)
		return (NULL);
	c = lst;
	list = NULL;
	while (c != NULL)
	{
		list = c;
		c = c->next;
	}
	return (list);
}
