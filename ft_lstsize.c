/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:30:37 by pehenri2          #+#    #+#             */
/*   Updated: 2023/08/07 14:43:16 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	if (lst == NULL)
		return (0);
	counter = 1;
	while (lst->next != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
