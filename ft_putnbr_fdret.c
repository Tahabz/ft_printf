/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fdret.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:12:57 by mobaz             #+#    #+#             */
/*   Updated: 2019/11/16 20:12:58 by mobaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fdret(int n, int fd)
{
	unsigned int nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar_fdret('-', fd);
		nb = -n;
	}
	if (nb > 9)
	{
		ft_putnbr_fdret((nb / 10), fd);
		ft_putchar_fdret((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fdret((nb + '0'), fd);
}
