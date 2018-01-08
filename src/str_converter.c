/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_converter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 12:43:43 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/08 17:11:28 by abouvero         ###   ########.fr       */
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
}

void 	str_converter(t_arg arg, va_list ap, int *len)
{
	char	*s;

	s = (arg.spe == 'X') ? ft_strtoupper(redirect(arg, ap)) : redirect(arg, ap);
	s = precision(s, arg);
	s = flags(s, arg);
	s = width(s, arg);
	reverse_width(s);
	*len += ft_strlen(s);
	ft_putstr(s);
	ft_strdel(&s);
}
