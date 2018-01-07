/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_converter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 12:43:43 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/07 18:32:58 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void 	str_converter(t_arg arg, va_list ap, int *len)
{
	char	*s;

	s = (arg.spe == 'X') ? ft_strtoupper(redirect(arg, ap)) : redirect(arg, ap);
	*len += ft_strlen(s);
	s = precision(s, arg);
	s = flags(s, arg);
	s = width(s, arg);
	ft_putstr(s);
	ft_strdel(&s);
}
