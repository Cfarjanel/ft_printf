/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:33:40 by cfarjane          #+#    #+#             */
/*   Updated: 2018/08/21 15:53:18 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ros_suite(char *str, int ret, char *new)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
		ret++;
	}
	while (*new && (*new == ' ' || *new == '0'))
	{
		write(1, " ", 1);
		new++;
		ret++;
	}
	return (ret);
}

int			rostring(char *str)
{
	char	*new;
	int		ret;

	ret = 0;
	if (*str)
	{
		if (ft_strchr(str, ' ') == NULL && ft_strchr(str, '0') == NULL)
		{
			ret = ft_putstr(str);
			return (ret);
		}
		else if (*str == ' ' || *str == '0')
		{
			new = str;
			str++;
		}
		while (*str == ' ' || *str == '0')
			str++;
		ret = ros_suite(str, ret, new);
	}
	return (ret);
}
