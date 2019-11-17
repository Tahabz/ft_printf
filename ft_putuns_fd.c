/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:15:43 by mobaz             #+#    #+#             */
/*   Updated: 2019/11/16 20:15:44 by mobaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuns_fd(t_size_u nb, int fd)
{
	if (nb > 9)
	{
		ft_putnbr_fdret((nb / 10), fd);
		ft_putchar_fdret((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fdret((nb + '0'), fd);
}
