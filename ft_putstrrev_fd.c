/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrrev_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:15:27 by mobaz             #+#    #+#             */
/*   Updated: 2019/11/16 20:15:28 by mobaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstrrev_fd(char *str, int fd)
{
	int i;

	i = ft_strlen(str) - 1;
	while (i != -1)
	{
		ft_putchar_fdret(str[i], fd);
		i--;
	}
}
