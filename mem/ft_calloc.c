/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:55:13 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/08/03 21:13:05 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#ifndef _linux_
	#include <stdint.h>
#endif
void	*ft_calloc(size_t count, size_t size)

{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)malloc (size * count);
	if ((size && SIZE_MAX / size < count) || p == NULL)
		return (NULL);
	while (i < count * size)
	{
		p[i] = '\0';
		i++;
	}
	return ((void *)p);
}
