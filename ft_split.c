/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peters <peters@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:39:52 by peters            #+#    #+#             */
/*   Updated: 2023/08/01 17:46:16 by peters           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *string, char delimiter)
{
	int	words;

	while (*string)
	{
		if (*string != delimiter)
		{
			words++;
			while (*string != delimiter && *string)
				string++;
		}
		else
			string++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		words;
	char	**split;

	i = 0;
	j = 0;
	k = 0;
	words = count_words((char *)s, c);
	split = malloc(sizeof(char *) * words);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			k = 0;
			while (s[i] != c)
				k++;
			split[j] = malloc(sizeof(char) * (k + 1));
			k = 0;
			while (s[i] != c)
			{
				split[j][k] = s[i];
				k++;
				i++;
			}
			split[j][k] = '\0';
			j++;
		}
	}
	return (split);
}
