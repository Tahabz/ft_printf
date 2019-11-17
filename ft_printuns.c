/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:12:19 by mobaz             #+#    #+#             */
/*   Updated: 2019/11/16 20:12:23 by mobaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_upoint(t_size_u y, int num[])
{
	if (y == 0 && num[5] == 1)
	{
		if (num[1] == 0)
		{
			ft_putnchar(' ', num[0]);
			return (1);
		}
		else if (num[0] == 0)
		{
			ft_putnchar('0', num[1]);
			return (1);
		}
	}
	return (0);
}

static void		ft_ugg(t_size_u y, int n[], int flag)
{
	int x;

	x = ft_numlen(y);
	if (n[0] <= x)
		return (ft_putuns_m(y, 0, 0, 0));
	if (flag == 2 && n[4] == 0)
		ft_putuns_m(y, 0, n[0] - x, flag);
	else
		ft_putuns_m(y, n[0] - x, 0, flag);
}

void			ft_printuns(int flag, int num[], va_list lst)
{
	int			x;
	t_size_u	y;

	y = va_arg(lst, unsigned int);
	x = ft_numlen(y);
	if (ft_upoint(y, num) == 1)
		return ;
	if (num[2] != 0 && num[3] == 0)
		ft_ugg(y, num, flag);
	else if (num[2] == 0 && num[3] == 0)
		ft_putuns_m(y, 0, 0, 0);
	else if (num[2] == 0 && num[3] != 0)
		ft_putuns_m(y, -1, num[1] - x, flag);
	else if (num[2] != 0 && num[3] != 0)
	{
		if (num[1] == 0 && flag == 2)
			flag = 0;
		if (num[1] <= x)
			return (num[0] <= x ? ft_putuns_m(y, 0, 0, 0)
			: ft_putuns_m(y, num[0] - x, 0, flag));
		else
			return (num[0] <= x ? ft_putuns_m(y, 0, num[1] - x, flag)
			: ft_putuns_m(y, num[0] - num[1], num[1] - x, flag));
	}
}
