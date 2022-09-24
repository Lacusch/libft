/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_longnb_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:58:54 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/09/24 13:39:09 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_put_longnb_fd(long n, int fd)
{
	long long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar_fd ('-', fd);
	}
	if (nb > 9)
	{
		ft_put_longnb_fd((nb / 10), fd);
		ft_putchar_fd((nb % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((nb + '0'), fd);
}
