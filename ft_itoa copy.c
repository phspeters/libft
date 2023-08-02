/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peters <peters@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:56:32 by peters            #+#    #+#             */
/*   Updated: 2023/08/01 18:58:49 by peters           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getdigits(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
		n = -n;
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

	if (n == 0)
		return ("0");
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
	while (nbr > 0)
	{
		len--;
		ascii[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		ascii[0] = '-';
	return (ascii);
}
