/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:54:45 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/03/31 15:18:35 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tempd;
	unsigned char	*temps;

	tempd = (unsigned char *)dst;
	temps = (unsigned char *)src;
		i = 0;
	while (i < n)
	{
	tempd[i] = temps[i];
	i++;
	}
	return (dst);
}
