/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:11:15 by adzahrao          #+#    #+#             */
/*   Updated: 2024/10/30 05:35:50 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	d;
	int		i;

	p = (char *)s;
	d = (char)c;
	i = ft_strlen(s);
	if (d == '\0')
		return (&p[i]);
	while (i)
	{
		i--;
		if (p[i] == d)
			return (&p[i]);
	}
	return (NULL);
}
