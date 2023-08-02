/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peters <peters@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:14:56 by peters            #+#    #+#             */
/*   Updated: 2023/08/01 18:43:48 by peters           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_getdigits(int n)
{
	int	digits;

	digits = 0;
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

	if (n == 0)
		return ("0");
	len = ft_getdigits(n);
	if (n < 0)
	{
		n = -n;
		ascii = malloc(sizeof(char) * (len + 2));
		if (ascii == NULL)
			return (NULL);
		ascii[len + 1] = '\0';
		ascii[0] = '-';
	}
	else
	{
		ascii = malloc(sizeof(char) * (len + 1));
		if (ascii == NULL)
			return (NULL);
		ascii[len] = '\0';
	}
	while (n > 0)
	{
		len--;
		ascii[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (ascii);
}

int	main(void)
{
	char	*str;

	str = ft_itoa(-123456789);
	printf("%s\n", str);
}
