/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:23:05 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/08/04 06:50:59 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_put_un_nbr_fd(unsigned int nb, int fd)
{
	if (nb < 9)
		ft_putchar_fd(nb + '0', 1);
	else
	{
		ft_put_un_nbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + 0, fd);
	}
}

void	ft_put_hex(unsigned long number, char c, int fd)
{
	if (number < 10)
		ft_putnbr_fd(number, 1);
	else if (number <= 16 & c == 'x' || c == 'X')
		ft_putnbr_fd('a' + (number - 10), 1);
	else if (number <= 16 && c == 'X')
		ft_putnbr_fd('A' + (number - 10), 1);
	else
	{
		ft_put_hex(number / 16, c, fd);
		ft_put_hex(number % 16, c, fd);
	}
}

void	ft_process_str(va_list ap, char c)
{
	if (c == 'c')
		ft_putchar_fd((char)va_arg(ap, int), 1);
	if (c == 's')
		ft_putstr_fd(va_arg (ap, char *), 1);
	if (c == 'p' || c == 'x' || c == 'X')
	{
		ft_putstr_fd("0x", 1);
		ft_put_hex(va_arg(ap, unsigned long), c, 1);
	}
	if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(ap, int), 1);
	if (c == 'u')
		ft_put_un_nbr_fd(va_arg(ap, unsigned int), 1);
	if (c == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		c;

	c = 0;
	i = 0;
	va_start (ap, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			c++;
			ft_process_str(ap, s[i]);
			i++;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			i++;
			c++;
		}
	}	
	va_end(ap);
	return (c);
}
