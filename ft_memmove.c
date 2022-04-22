/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:25:30 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/04 16:22:17 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dstp;
	unsigned char	*srcp;

	dstp = (unsigned char *)dst;
	srcp = (unsigned char *)src;
	i = 0;
	if (dstp > srcp && srcp + len > dstp)
	{
		while (len > 0)
		{
			dstp[len - 1] = srcp[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			dstp[i] = srcp[i];
			i++;
		}
	}
	return (dst);
}
