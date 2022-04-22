/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:21:03 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/12 15:14:37 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rt;
	size_t	i;
	size_t	len;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = (ft_strlen(s));
	rt = ft_calloc((len + 1), sizeof(char));
	if (rt == NULL)
		return (NULL);
	while (i < len)
	{
		rt[i] = (*f)(i, s[i]);
		i++;
	}
	return (rt);
}
