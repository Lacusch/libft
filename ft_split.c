/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:34:50 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/25 18:12:41 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *str, char sep)
{
	int	i;
	int	count;

	if (str == 0 || str[0] == 0)
		return (0);
	i = 1;
	count = 0;
	if (str[0] != sep)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] != sep && str[i - 1] == sep)
			count++;
		i++;
	}
	return (count);
}

static	char	*word_dub(char const *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	int		str_start;
	char	**spl_str;

	spl_str = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (s == NULL || !spl_str)
		return (NULL);
	i = 0;
	j = 0;
	str_start = -1;
	while ((i <= ft_strlen(s)) && j <= word_count(s, c))
	{
		if (s[i] != c && str_start < 0)
			str_start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && str_start >= 0)
		{
			spl_str[j++] = word_dub(s, str_start, i);
			str_start = -1;
		}
		i++;
	}
	spl_str[j] = 0;
	return (spl_str);
}
