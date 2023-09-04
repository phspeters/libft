/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:26:36 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/04 18:40:05 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		counter;

	nb = nbr;
	counter = 0;
	if (check_base(base))
		return (0);
	if (nb < 0)
	{
		counter += write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= (long)ft_strlen(base))
	{
		counter += ft_putnbr_base(nb / ft_strlen(base), base);
		counter += ft_putchar(base[nb % ft_strlen(base)]);
	}
	else
	{
		counter += ft_putchar(base[nb % ft_strlen(base)]);
	}
	return (counter);
}
