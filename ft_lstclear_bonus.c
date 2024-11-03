/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:23:34 by adzahrao          #+#    #+#             */
/*   Updated: 2024/10/29 05:34:43 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*s;

	if (!lst || !del)
		return ;
	p = *lst;
	while (p)
	{
		s = p;
		p = p->next;
		del(s->content);
		free(s);
	}
	*lst = NULL;
}
