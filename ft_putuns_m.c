/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:17:02 by mobaz             #+#    #+#             */
/*   Updated: 2019/11/16 20:17:03 by mobaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putuns_m(t_size_u y, int spc, int zr, int f)
{
	if (f == 1)
	{
		ft_putnchar('0', zr);
		ft_putuns_fd(y, 1);
		ft_putnchar(' ', spc);
	}
	else
	{
		ft_putnchar(' ', spc);
		ft_putnchar('0', zr);
		ft_putuns_fd(y, 1);
	}
}
