/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 17:09:11 by cfarjane          #+#    #+#             */
/*   Updated: 2018/08/21 19:18:35 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_isflag(char c)
{
	return (c == '+' || c == '-' || c == ' ' || c == '0' || c == '#' || c == 'l'
			|| c == 'h' || c == 'j' || c == 'z' || c == '.' || ft_isdigit(c));
}

int		ft_isconv(char c)
{
	return (c == 'd' || c == 'i' || c == 'D' || c == 'o' || c == 'O' ||
			c == 'u' || c == 'U' || c == 'c' || c == 'C' || c == 'p' ||
			c == 's' || c == 'S' || c == 'x' || c == 'X');
}

int		minus_str(t_flags *flag, char *str, int ret)
{
	int len;

	len = (int)ft_strlen(str);
	if (flag->width > 0 && flag->pre > 0)
	{
		if (flag->pre > len)
			ret += ft_putnchar(' ', flag->width - len);
		else
			ret += ft_putnchar(' ', flag->width - flag->pre);
	}
	else if (flag->width > 0 && flag->pre == 0)
	{
		if (flag->pre != -1)
			ret += ft_putstr(str);
		ret += ft_putnchar(' ', flag->width - len);
	}
	return (ret);
}

int		minus_wstr(t_flags *flag, wchar_t *str, int ret)
{
	int len;

	len = ft_wstrlen(str);
	if (flag->width > 0 && flag->pre > 0)
	{
		if (flag->pre > len)
			ret += ft_putnchar(' ', flag->width - len);
		else
			ret += ft_putnchar(' ', flag->width - flag->pre);
	}
	else if (flag->width > 0 && flag->pre == 0)
	{
		if (flag->pre != -1)
		{
			ft_putwstr(str);
			ret += len;
		}
		ret += ft_putnchar(' ', flag->width - len);
	}
	return (ret);
}
