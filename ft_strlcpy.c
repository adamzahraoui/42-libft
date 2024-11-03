/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:38:01 by adzahrao          #+#    #+#             */
/*   Updated: 2024/10/29 06:00:16 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	src_l;

	src_l = ft_strlen(src);
	s = 0;
	if (size == 0)
		return (src_l);
	else
	{
		while (s < size - 1 && src[s])
		{
			dst[s] = src[s];
			s++;
		}
		dst[s] = '\0';
		return (src_l);
	}
}
