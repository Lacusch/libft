/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:55:13 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/09/18 06:43:48 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdint.h>

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
