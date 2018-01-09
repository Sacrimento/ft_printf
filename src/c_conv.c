/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 18:03:01 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/09 15:24:45 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void 	c_conv(int *len, t_arg arg, va_list ap)
{
	char	*s;

	if (arg.width != 0)
		s = create_width(arg.att.width_modi, arg.width - 1);
	if (arg.att.width_modi == '-')
	{
		arg.spe == 'c' && arg.flag != 'l'? ft_putchar((char)va_arg(ap, void*)) : 0/*ft_putwchar((unsigned int)va_arg(ap, void*))*/;
		arg.width != 0 ? ft_putstr(s) : 0;
	}
	else
	{
		arg.width != 0 ? ft_putstr(s) : 0;
		arg.spe == 'c' && arg.flag != 'l' ? ft_putchar((char)va_arg(ap, void*)) : 0/*ft_putwchar((unsigned int)va_arg(ap, void*))*/;
	}
	*len += arg.width != 0 ? ft_strlen(s) + 1 : 1;
	arg.width != 0 ? ft_strdel(&s) : 0;
}
