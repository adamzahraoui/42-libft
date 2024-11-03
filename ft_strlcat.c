/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 00:09:06 by adzahrao          #+#    #+#             */
/*   Updated: 2024/10/29 05:44:08 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sl;
	size_t	dl;
	size_t	j;

	i = 0;
	sl = ft_strlen(src);
	if ((!dst && size == 0) || size == 0)
		return (sl);
	dl = ft_strlen(dst);
	j = size - dl - 1;
	if (size <= dl)
		return (size + sl);
	if (j > 0)
	{
		while (j > i && src[i])
		{
			dst[dl + i] = src[i];
			i++;
		}
		dst[dl + i] = '\0';
	}
	return (dl + sl);
}
