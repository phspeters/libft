/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:56:32 by pehenri2          #+#    #+#             */
/*   Updated: 2023/08/08 15:36:46 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getdigits(long n)
{
	int	digits;

	digits = 0;
	if (n < 0)
		n = -n;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*ascii;
	int		len;
	long	nbr;

	len = ft_getdigits(n);
	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	ascii = malloc(sizeof(char) * (len + 1));
	if (ascii == NULL)
		return (NULL);
	ascii[len] = '\0';
	while (len > 0)
	{
		ascii[--len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		ascii[0] = '-';
	return (ascii);
}
