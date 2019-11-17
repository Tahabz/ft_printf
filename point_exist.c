/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_exist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:14:02 by mobaz             #+#    #+#             */
/*   Updated: 2019/11/16 20:14:05 by mobaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_set(int num[])
{
	if (num[1] < 0)
	{
		num[1] = 0;
		num[3] = 0;
		num[5] = 0;
	}
}

void	ft_point_exist(char *str, int num[], va_list lst, char c)
{
	if (c == 'X')
		num[4] = 1;
	while (*str != c)
	{
		if ((*str == '.' && *(str + 1) == c))
			num[4] = 1;
		if (*str == '.')
			num[5] = 1;
		if (*str == '.' && c != '%')
		{
			if (ft_isdigit(*(str + 1)))
			{
				num[3] = 1;
				num[1] = atoi(str + 1);
			}
			else if (*(str + 1) == '*')
			{
				num[3] = 1;
				num[1] = va_arg(lst, int);
			}
			ft_set(num);
			return ;
		}
		str++;
	}
}
