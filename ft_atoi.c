/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:04:25 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/05 11:53:42 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	operator;
	int	out;

	c = 0;
	operator = 1;
	out = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			operator = -operator;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		out = (str[c] - '0') + (out * 10);
		c++;
	}
	return (out * operator);
}
