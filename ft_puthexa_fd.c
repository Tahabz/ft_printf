/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:12:46 by mobaz             #+#    #+#             */
/*   Updated: 2019/11/16 20:12:47 by mobaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_free(char **str, int fd)
{
	ft_putstrrev_fd(*str, fd);
	free(*str);
	*str = NULL;
}

void			ft_puthexa_fd(unsigned int n, int m, int fd)
{
	int		temp;
	char	*str;
	int		i;

	i = 0;
	if (n == 0)
		return (ft_putchar_fdret('0', 1));
	if (!(str = (char *)malloc(sizeof(char) * ft_numlen(n) + 1)))
		return ;
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			str[i++] = temp + 48;
		else
		{
			if (m)
				str[i++] = temp + 55;
			else
				str[i++] = temp + 87;
		}
		n = n / 16;
	}
	str[i] = '\0';
	ft_free(&str, fd);
}
