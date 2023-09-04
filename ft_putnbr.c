/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:35:11 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/04 16:06:35 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	long	nbr;
	int		counter;

	counter = 0;
	nbr = n;
	if (n < 0)
	{
		counter += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		counter += ft_putnbr(nbr / 10);
	}
	counter += ft_putchar(nbr % 10 + '0');
	return (counter);
}
