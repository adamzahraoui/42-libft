/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:54:41 by adzahrao          #+#    #+#             */
/*   Updated: 2024/10/27 14:22:06 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	over_flow(const char *src, int s)
{
	long int	n;
	long int	nb;
	size_t		i;

	n = 0;
	nb = 0;
	i = 0;
	while (src[i] >= '0' && src[i] <= '9')
	{
		nb = n * 10 + (src[i] - '0');
		if (nb < n && s == 1)
			return (-1);
		else if (nb < n && s == -1)
			return (0);
		n = nb;
		i++;
	}
	return (n * s);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	s = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	r = over_flow(nptr + i, s);
	return (r);
}
