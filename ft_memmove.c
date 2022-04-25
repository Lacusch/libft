/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:25:30 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/25 09:08:31 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dstp;
	unsigned char	*srcp;

	if (dst == NULL && src == NULL )
		return (dst);
	dstp = (unsigned char *)dst;
	srcp = (unsigned char *)src;
	i = 0;
	if ((dstp == NULL && srcp == NULL ) || i == len)
		return (dst);
	if (dstp > srcp && srcp + len > dstp)
	{
		while (len > 0)
		{
			dstp[len - 1] = srcp[len - 1];
			len--;
		}
	}
	while (i < len)
	{
		dstp[i] = srcp[i];
		i++;
	}
	return (dst);
}
