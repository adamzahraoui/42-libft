/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 02:51:56 by adzahrao          #+#    #+#             */
/*   Updated: 2024/10/30 05:34:32 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	char	d;
	size_t	i;

	p = (char *)s;
	d = (char)c;
	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] != d)
			i++;
		else
			return (&p[i]);
	}
	if (d == '\0')
		return (&p[i]);
	return (NULL);
}
