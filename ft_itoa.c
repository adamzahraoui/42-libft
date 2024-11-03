/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:17:36 by adzahrao          #+#    #+#             */
/*   Updated: 2024/11/01 18:48:07 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_nb(long a)
{
	int	size;

	size = 0;
	if (a < 0)
	{
		a = -a;
		size++;
	}
	while (a > 0)
	{
		a /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		size;
	char	*itoa;
	int		c;

	nb = n;
	c = 0;
	size = size_nb(nb);
	if (n == 0)
		return (ft_strdup("0"));
	itoa = malloc((size + 1) * sizeof(char));
	if (!itoa)
		return (NULL);
	itoa[size] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		itoa[c++] = '-';
	}
	while (size > c)
	{
		itoa[(size--) - 1] = (nb % 10) + '0';
		nb /= 10;
	}
	return (itoa);
}
