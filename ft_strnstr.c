/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:56:24 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/21 18:40:47 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen (needle);
	i = 0;
	if (ft_strlen (needle) == 0)
		return ((char *)haystack);
	while (i < len && *haystack != '\0')
	{
		if (0 == ft_memcmp(haystack, needle, needle_len)
			&& len >= i + needle_len)
		{
			return ((char *)haystack);
		}
		i++;
		haystack++;
	}
	return (NULL);
}
