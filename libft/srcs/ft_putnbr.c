/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:30:37 by cfarjane          #+#    #+#             */
/*   Updated: 2018/08/17 12:47:28 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static void	cheat(long long int n, unsigned int nb, int ret)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		ret += 1;
	}
	nb = n;
}

int			ft_putnbr(long long int n)
{
	unsigned int	nb;
	int				ret;

	ret = 0;
	nb = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		ret = 11;
	}
	else
	{
		cheat(n, nb, ret);
		if (nb < 10)
		{
			ft_putchar(n + '0');
			return (++ret);
		}
		ret += ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
		ret += 1;
	}
	return (ret);
}
