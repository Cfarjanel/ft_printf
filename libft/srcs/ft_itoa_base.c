/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 19:48:01 by cfarjane          #+#    #+#             */
/*   Updated: 2018/08/17 16:50:16 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_len(long long value, int base)
{
	int cpt;

	cpt = 0;
	while (value != 0)
	{
		value /= base;
		cpt++;
	}
	return (cpt);
}

char			*ft_itoa_base(long long value, int base)
{
	char	*ret;
	int		len;
	int		neg;

	if (value == 0 || (unsigned long long)value == 9223372036854775808ULL)
	{
		ret = (value == 0 ? ft_strdup("0") : ft_strdup("-9223372036854775808"));
		return (ret);
	}
	neg = (value < 0 && base == 10 ? 1 : 0);
	if (value < 0)
		value *= -1;
	len = ft_len(value, base);
	if (!(ret = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	ret[len + neg] = '\0';
	while (len-- > 0)
	{
		ret[len + neg] = (value % base) + (value % base > 9 ? 55 : 48);
		value /= base;
	}
	if (neg == 1)
		ret[0] = '-';
	return (ret);
}
