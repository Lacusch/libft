/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:39:30 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/08 14:03:48 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_str_rev(char *str)
{
	size_t	length;
	size_t	i;
	char	temp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
		i++;
	}
}

static int	ft_digit(int n)
{
	int	digit;

	if (n < 10 && n > -10)
		return (1);
	digit = 0;
	while (n != 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	is_neg;
	char	*str;

	is_neg = 0;
	i = 0;
	if (n < 0)
		is_neg = 1;
	str = ft_calloc (ft_digit(n) + is_neg + 1, 1);
	if (n == 0)
		str[0] = '0';
	if (str == NULL)
		return (NULL);
	while (n != 0)
	{
		if (is_neg == 1)
			str[i++] = '0' + ((n % 10) * -1);
		else
			str[i++] = '0' + (n % 10);
		n = (n / 10);
	}
	if (is_neg == 1)
		str[i] = '-';
	ft_str_rev (str);
	return (str);
}
