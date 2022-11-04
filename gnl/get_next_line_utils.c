/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:39:38 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/11/04 09:36:17 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	has_str_nl(const char *s)
{
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == '\n')
			return (1);
		s++;
	}
	return (0);
}

char	*move_str(char *dest, char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
		dest[i++] = '\0';
	return (dest);
}
