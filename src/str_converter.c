/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_converter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 12:43:43 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/12 16:56:12 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void 	reverse_width(char *s)
{
	int		i;

	i = 0;
	while (s[i] == '0')
		i++;
	if (s[i] == '-')
	{
		s[i] = s[i - 1];
		s[0] = '-';
	}
	else if (s[i] == '+')
	{
		s[i] = s[i - 1];
		s[0] = '+';
	}
	else if (s[i] == 'x')
	{
		s[i] = s[i - 1];
		s[1] = 'x';
	}
	else if (s[i] == 'X')
	{
		s[i] = s[i - 1];
		s[1] = 'X';
	}
}

void 	str_converter(t_arg arg, va_list ap, int *len)
{
	char	*s;

	if (arg.spe == 'c' || arg.spe == 'C')
		c_conv(len, arg, ap);
	else if (arg.spe == 'S' || (arg.spe == 's' && arg.flag == 'l'))
		wide_str(len, arg, (wchar_t *)va_arg(ap, void *));
	else
	{
		s = (arg.spe == 'X') ? ft_strtoupper(redirect(arg, ap)) : redirect(arg, ap);
		s = precision(s, arg);
		s = flags(s, arg);
		s = width(s, arg);
		reverse_width(s);
		*len += ft_strlen(s);
		ft_putstr(s);
		//ft_strdel(&s);
	}
}
