/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peters <peters@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:47:56 by peters            #+#    #+#             */
/*   Updated: 2023/07/27 19:00:58 by peters           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *joined;
    int     i;
    int     j;
    
    joined = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
    i = 0;
    while (s1[i])
    {
        joined[i] = s1[i];
        i++;
    }
    j = 0;
    while(s2[j])
    {
        joined[i+j] = s2[j];
        j++;
    }
    joined[i+j] = '\0';
    return (joined);
}
