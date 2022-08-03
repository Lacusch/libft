/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:37:15 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/08/03 21:00:56 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	i = ft_strlen(dst);
	c = 0;
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	while (src[c] != '\0' && i + c + 1 < dstsize)
	{
		dst[i + c] = src[c];
		c++;
	}
	dst[i + c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[c]));
}
