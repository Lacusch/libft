/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:39:38 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/08/03 20:48:55 by slaszlo-         ###   ########.fr       */
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

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*p_src;
	unsigned char		*p_dest;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	p_dest = dest;
	p_src = src;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*concat_str;
	int		length_s1;
	int		length_s2;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		if (s1 == NULL)
			return (NULL);
		*s1 = '\0';
	}
	if (*s2 == '\0')
		return (s1);
	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	concat_str = malloc(sizeof(char) * (length_s1 + length_s2) + 1);
	if (!concat_str)
		return (NULL);
	ft_memcpy(concat_str, s1, length_s1);
	ft_memcpy(concat_str + length_s1, s2, length_s2 + 1);
	free(s1);
	return (concat_str);
}
