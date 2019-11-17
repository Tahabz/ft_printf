/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:09:57 by mobaz             #+#    #+#             */
/*   Updated: 2019/11/16 20:09:59 by mobaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(int flag, int num[], va_list lst)
{
	char c;

	c = va_arg(lst, int);
	if (flag == 1)
	{
		ft_putchar_fdret(c, 1);
		return (ft_putnchar(' ', num[0] - 1));
	}
	ft_putnchar(' ', num[0] - 1);
	return (ft_putchar_fdret(c, 1));
}
