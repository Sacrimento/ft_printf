/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_controller.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 17:20:10 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/07 20:39:14 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		str_controller(char *str, va_list ap)
{
	int		i;
	int		count;
	int		len;

	i = 0;
	len = 0;
	while (str[i])
	{
		count = 0;
		if (str[i] == '%')
		{
			while (!v_spe(str[i + count]) && str[i + count])
				count++;
			is_format_v(get_struct(ft_strsub(str, ++i, count)), ap, &len) ? i += count : 0;
		}
		if (str[i])
			ft_putchar(str[i++]);
		len++;
	}
	ft_strdel(&str);
	return (len - 1);
}

int		ft_printf(const char *fmt, ...)
{
	va_list		ap;
	int			len;

	if (fmt == NULL)
		return (-1);
	va_start(ap, fmt);
	len = str_controller(ft_strdup((char*)fmt), ap);
	va_end(ap);
	return (len);
}
