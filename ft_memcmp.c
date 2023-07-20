/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:07:08 by pehenri2          #+#    #+#             */
/*   Updated: 2023/07/19 18:05:39 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (void *)s1;
	ptr2 = (void *)s2;
	i = 0;
	while (ptr1[i] == ptr2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (ptr1[i] - ptr2[i]);
}
