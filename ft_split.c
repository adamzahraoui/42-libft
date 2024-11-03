/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:34:47 by adzahrao          #+#    #+#             */
/*   Updated: 2024/11/01 04:31:01 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft___strlen(char *str, int *i, char sep)
{
	int	start;

	start = *i;
	while (str[*i] && str[*i] != sep)
		(*i)++;
	return (*i - start);
}

void	ft_strcpy(char *src, char *ptr, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		ptr[i] = src[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
}

int	count_word(char *src, char sep)
{
	int	i;
	int	cw;

	i = 0;
	cw = 0;
	while (src[i])
	{
		while (src[i] && src[i] == sep)
			i++;
		if (src[i] && src[i] != sep)
		{
			cw++;
			while (src[i] && src[i] != sep)
				i++;
		}
	}
	return (cw);
}

void	*ft_free(char **p, int index)
{
	while (index--)
		free (p[index]);
	free (p);
	return (NULL);
}

char	**ft_split(const char *str, char c)
{
	char	**p;
	int		index;
	int		i;
	int		start;

	p = malloc((count_word((char *)str, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	i = 0;
	index = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] != '\0')
		{
			start = i;
			p[index] = malloc((ft___strlen((char *)str, &i, c) + 1));
			if (!p[index])
				return (ft_free(p, index));
			ft_strcpy((char *)str, p[index++], start, i);
		}
	}
	p[index] = NULL;
	return (p);
}
