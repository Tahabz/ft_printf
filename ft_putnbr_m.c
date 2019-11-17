/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:13:14 by mobaz             #+#    #+#             */
/*   Updated: 2019/11/16 20:13:15 by mobaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putnbr_m(int y, int spc, int zr, int f)
{
	t_size_u a;

	if (y < 0)
		a = -y;
	else
		a = y;
	if (f == 1)
	{
		if (y < 0)
			ft_putchar_fdret('-', 1);
		ft_putnchar('0', zr);
		ft_putuns_fd(a, 1);
		ft_putnchar(' ', spc);
	}
	else
	{
		ft_putnchar(' ', spc);
		if (y < 0)
			ft_putchar_fdret('-', 1);
		ft_putnchar('0', zr);
		ft_putuns_fd(a, 1);
	}
}
