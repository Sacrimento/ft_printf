/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_controller.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 17:20:10 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/05 15:57:32 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void 	str_controller(char *str, va_list ap)
{
	int		i;
	int		count;

	i = 0;
	while (str[i])
	{
		count = 0;
		if (str[i] == '%')
		{
			while (!v_spe(str[i + count]) && str[i + count])
				count++;
			is_format_v(get_struct(ft_strsub(str, ++i, count)), ap) ? i += count : 0;
		}
		ft_putchar(str[i]);
		i++;
	}
	//ft_strdel(&str);
}

int		ft_printf(const char *fmt, ...)
{
	va_list		ap;

	va_start(ap, fmt);
	str_controller(ft_strdup((char*)fmt), ap);
	va_end(ap);
	return (0);
}
