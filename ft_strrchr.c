/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:17:34 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/21 16:44:48 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			p = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		p = (char *)(s + i);
	return (p);
}
